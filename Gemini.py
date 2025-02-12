import os
import google.generativeai as genai
import re
import warnings

# Use environment variables for security
API_KEY = 'AIzaSyAGCJ5C-h8qCz6UjStz5E_TRNs12muZAek'

generation_config = {
    "temperature": 0.7,
    "top_p": 1,
    "top_k": 1,
    "max_output_tokens": 20000,
}

clean = re.compile(r'[^a-zA-Z,\s.!?0-9\'\:]')

safety_settings = [
    {"category": "HARM_CATEGORY_HARASSMENT", "threshold": "BLOCK_NONE"},
    {"category": "HARM_CATEGORY_HATE_SPEECH", "threshold": "BLOCK_NONE"},
    {"category": "HARM_CATEGORY_SEXUALLY_EXPLICIT", "threshold": "BLOCK_NONE"},
    {"category": "HARM_CATEGORY_DANGEROUS_CONTENT", "threshold": "BLOCK_NONE"},
]

# Configure the API key for genai
genai.configure(api_key=API_KEY)

# Initialize the model
model = genai.GenerativeModel(
    model_name="gemini-pro",
    generation_config=generation_config,
    safety_settings=safety_settings
)

messages = [
    {"parts": [{"text": "Hello, how are you doing today?"}], "role": "user"},
    {"parts": [{"text": "Hello, I am doing well boss. How can I help you sir?"}], "role": "model"}
]

def gemini_chat(query: str) -> str:
    global messages
    messages.append({"parts": [{"text": query + " you a helpful AI?"}], "role": "user"})
    try:
        response = model.generate_content(messages)
        messages.append({"parts": [{"text": response.text}], "role": "model"})
        cleaned_response = clean.sub('', response.text)
        return cleaned_response
    except Exception as e:
        return f"An error occurred: {e}"

if __name__ == "__main__":
    input_file = 'query.txt'
    output_file = 'response.txt'

    if os.path.exists(input_file):
        with open(input_file, 'r') as file:
            query = file.read().strip()

        response = gemini_chat(query)

        # print(f"BOT => "+ response)

        with open(output_file, 'w') as file:
            file.write(f"cHAT BOT 2.O {response}\n")

        # print(f"Response saved to {output_file}")
    else:
        print(f"Input file '{input_file}' not found.")
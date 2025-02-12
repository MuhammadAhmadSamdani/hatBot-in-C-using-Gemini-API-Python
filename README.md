# ChatBot 2.0 - C++ & Python (Gemini API)

ChatBot 2.0 is an AI-powered chatbot built using **C++** and **Python**, integrating the **Gemini API** for intelligent responses. It utilizes **linked lists** for account management and **file handling** for storing queries and responses.

## 🚀 Features
- **Gemini API Integration** for AI-powered responses.
- **C++ User Authentication System** (Signup, Login, Password Recovery).
- **File Handling** for storing queries & responses.
- **Python Integration** for AI processing.
- **Guest Mode** for chat without history tracking.
- **Sound Effects** for enhanced user interaction.

---

## 🛠️ Setup & Installation
### **1. Python Setup (VS Code)**
1. Install required Python libraries:
   ```sh
   pip install google-generativeai
   ```
2. Run `Gemini.py` to initialize the chatbot.

### **2. C++ Setup (Dev-C++)**
1. Create a new project in **Dev-C++**.
2. Add **sound libraries** to the `lib` folder.
3. Set the **sound path** in the project settings.
4. Compile and run the chatbot.

---

## 🔧 How It Works
1. **C++ takes user input** and writes it to `query.txt`.
2. **Python script (`Gemini.py`) runs**, reads `query.txt`, and fetches a response from **Gemini API**.
3. The **response is saved in `response.txt`**.
4. **C++ reads `response.txt`** and displays the chatbot’s reply.
5. User can **continue chatting** or exit the system.

---

## 📂 Project Structure
```
📁 ChatBot_2.0
 ├── 📄 Gemini.py         # Python script for AI responses
 ├── 📄 CHAT_BOT_2.0.dev  # Dev-C++ project file
 ├── 📄 query.txt         # Stores user input
 ├── 📄 response.txt      # Stores chatbot's response
 ├── 📁 lib               # Sound libraries
```

---

## 🤖 Future Enhancements
- **GUI Integration** for better user experience.
- **Database Support** for storing user history.
- **More AI Features** for improved responses.

📌 **Developed By:** Ahmad 🚀


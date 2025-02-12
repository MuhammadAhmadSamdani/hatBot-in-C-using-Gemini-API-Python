////////////////////////////
//        Libraries
///////////////////////////

#include <iostream>
#include <fstream>   // For File Handling
#include <string>
#include <Windows.h> //  For Color or Sound
#include <conio.h>   //  For get
#include <iomanip>   // For setw 

//------------------------------------

using namespace std;

//------------------------------------



///////////////////////////////////////////////////////////////////////////////////////////
//   Class Design (Color, width & height , Loading Animation, Banner Design, Box, Output)
///////////////////////////////////////////////////////////////////////////////////////////

class Design
{
	
	public:
			
	///////////////////////////////
    // Set according to X & Y-axis   
    ///////////////////////////////
			
	//This Function is used to replace bar in character
    void gotoxy(int x, int y)
    {
        COORD coord;
        coord.X = x;
        coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);    
    }  
	
	
	////////////////////////////
    //      Colors   
    ////////////////////////////
    
    // This Function is used to colour in other Functions
    void setColor(int color) 
	{
    	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
	}


	// This Function is use to get Date & Time
	void DateAndDay()
	{
		time_t currentTime = time(nullptr);

    
	    tm* localTime = localtime(&currentTime);
	
	    
	    int year = localTime->tm_year + 1900; // Years since 1900
	    int month = localTime->tm_mon + 1;   // Months since January (0-11)
	    int date = localTime->tm_mday;
	
	    
	    const char* daysOfWeek[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
	    const char* dayName = daysOfWeek[localTime->tm_wday];
	
	    
	    setColor(5);
	    cout << setw(55) << "Date: ";
	    setColor(7);
		cout  << date << " - " << month << " - " << year ;
		setColor(5);
		cout << "  |  ";
		setColor(7);
	    cout << " Day: " ;
	    setColor(5);
		cout << dayName << endl;
		setColor(7);
	}
	

  	////////////////////////////
    //     Loading Animation   
    ////////////////////////////
    
    // Function to SignUp loading animation using boxes
	void SignUploginAnimation() 
	{
    	int totalBoxes = 20;
    	char filledBox = 219; // ASCII code for filled box character
    	char emptyBox = ' ';

    	setColor(7); // Set color for animation

    	for (int i = 0; i <= totalBoxes; ++i) 
		{
    	    gotoxy(60, 24); // Position the animation bar
        	
			for (int j = 0; j < i; ++j) 
			{
            	cout << filledBox;
        	}
        	
        	for (int j = i; j < totalBoxes; ++j) 
			{
            	cout << emptyBox;
        	}
        	
			Sleep(100); // Adjust speed of animation (milliseconds)
    	}
    	
		setColor(7);  // Reset to default color
    	cout << endl;
	}

	
	// Function to LogIn loading animation using boxes
	void LogInloginAnimation() 
	{
    	int totalBoxes = 20;
    	char filledBox = 219; // ASCII code for filled box character
    	char emptyBox = ' ';

    	setColor(7); // Set color for animation

    	for (int i = 0; i <= totalBoxes; ++i) 
		{
    	    gotoxy(60, 19); // Position the animation bar
        	
			for (int j = 0; j < i; ++j) 
			{
            	cout << filledBox;
        	}
        	
        	for (int j = i; j < totalBoxes; ++j) 
			{
            	cout << emptyBox;
        	}
        	
			Sleep(100); // Adjust speed of animation (milliseconds)
    	}
    	
		setColor(7);  // Reset to default color
    	cout << endl;
	}


	// Function to ForGet Password loading animation using boxes
	void ForGetloginAnimation() 
	{
    	int totalBoxes = 20;
    	char filledBox = 219; // ASCII code for filled box character
    	char emptyBox = ' ';

    	setColor(7); // Set color for animation

    	for (int i = 0; i <= totalBoxes; ++i) 
		{
    	    gotoxy(59, 22); // Position the animation bar
        	
			for (int j = 0; j < i; ++j) 
			{
            	cout << filledBox;
        	}
        	
        	for (int j = i; j < totalBoxes; ++j) 
			{
            	cout << emptyBox;
        	}
        	
			Sleep(100); // Adjust speed of animation (milliseconds)
    	}
    	
		setColor(7);  // Reset to default color
    	cout << endl;
	}

	
	// Function to Remove Account loading animation using boxes
	void RemoveloginAnimation() 
	{
    	int totalBoxes = 20;
    	char filledBox = 219; // ASCII code for filled box character
    	char emptyBox = ' ';

    	setColor(7); // Set color for animation

    	for (int i = 0; i <= totalBoxes; ++i) 
		{
    	    gotoxy(58, 18); // Position the animation bar
        	
			for (int j = 0; j < i; ++j) 
			{
            	cout << filledBox;
        	}
        	
        	for (int j = i; j < totalBoxes; ++j) 
			{
            	cout << emptyBox;
        	}
        	
			Sleep(100); // Adjust speed of animation (milliseconds)
    	}
    	
		setColor(7);  // Reset to default color
    	cout << endl;
	}


	///////////////////////////////
    //   ChatBot 2.0 Design  
    //////////////////////////////
	
	
	// This asci desig is use to starting interface screen
	void start()
	{
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;

		setColor(5);
		
    	cout << setw(99) << "   ____ _   _    _  _____   ____   ___ _____   ____    ___  " << endl;
    	cout << setw(99) << "  / ___| | | |  / \\|_   _| | __ ) / _ \\_   _| |___ \\  / _ \\ " << endl;
    	cout << setw(99) << " | |   | |_| | / _ \\ | |   |  _ \\| | | || |     __) || | | |" << endl;
    	cout << setw(99) << " | |___|  _  |/ ___ \\| |   | |_) | |_| || |    / __/ | |_| |" << endl;
    	cout << setw(99) << "  \\____|_| |_/_/   \\_\\_|   |____/ \\___/ |_|   |_____(_)___/ " << endl << endl;
		cout << setw(93) << "  M. Ahmad Samdani, Uroobah Ovais & Areej Muskan " << endl << endl;
		
		setColor(7);
		
    	cout << setw(99) << "========================================================= " << endl << endl;
    	
    	setColor(5);
    	
    	cout << setw(89) << "HEY! I'M YOUR BUDDY WHAT'S ON YOUR MIND?"<<endl << endl; 
    	
    	setColor(7);
    	
		cout << setw(99) << "========================================================= " << endl;
		
		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;

		
	}

	
	
	// Display the Chatbot starting Interface design ASCII art
	void startingDesign() 
	{
		Design::start(); // starting Interface
		
		system("pause"); // pause screen
		system("cls");  // clear screen
		
    	setColor(7); // Reset to default color
	
    	cout << endl << endl << endl << endl << endl;

    	cout << setw(99) << "========================================================= " << endl;

    	setColor(5); // Set Purple color

    	cout << setw(99) << "   ____ _   _    _  _____   ____   ___ _____   ____    ___  " << endl;
    	cout << setw(99) << "  / ___| | | |  / \\|_   _| | __ ) / _ \\_   _| |___ \\  / _ \\ " << endl;
    	cout << setw(99) << " | |   | |_| | / _ \\ | |   |  _ \\| | | || |     __) || | | |" << endl;
    	cout << setw(99) << " | |___|  _  |/ ___ \\| |   | |_) | |_| || |    / __/ | |_| |" << endl;
    	cout << setw(99) << "  \\____|_| |_/_/   \\_\\_|   |____/ \\___/ |_|   |_____(_)___/ " << endl << endl;
		cout << setw(95) << "  M. Ahmad Samdani, Uroobah Ovais & Areej Muskan " << endl;
		
	    setColor(7); // Reset text color to default

    	cout << setw(99) << "========================================================= " << endl;

    	setColor(5);

    	cout << setw(86) << "Please choose an option to continue" << endl;

    	setColor(7); // Reset console color to default

    	cout << setw(99) << "========================================================= " << endl;

    	cout << endl;
    	cout << setw(80) << " 1. Create a New Account" << endl;
    	cout << setw(82) << " 2. Log Into Your Account " << endl;
    	cout << setw(80) << " 3. Continue as a Guest " << endl;
    	cout << setw(83) << " 4. Deactivate Your Acount " << endl;
    	cout << setw(65) << " 5. Exit " << endl;
    	cout << endl;

    	cout << setw(99) << "========================================================= " << endl;
	}	
	

    
	// Display the Sign-Up design ASCII art
	void SignUpDesign() 
	{
    	cout << setw(91) << "=========================================== " << endl;

    	setColor(5); // Set text color to purple 

    	cout << setw(86) << "  ____ ___ ____ _   _   _   _ ____  " << endl;
    	cout << setw(86) << " / ___|_ _/ ___| \\ | | | | | |  _ \\ " << endl;
    	cout << setw(86) << " \\___ \\| | |  _|  \\| | | | | | |_) |" << endl;
    	cout << setw(86) << "  ___) | | |_| | |\\  | | |_| |  __/ " << endl;
    	cout << setw(86) << " |____/___\\____|_| \\_|  \\___/|_|    " << endl;
    	cout << setw(86) << "                                    " << endl;

    	setColor(7); // Reset text color to default

    	cout << setw(91) << "=========================================== " << endl;
		
	}

	
	
	// Display the Logi-In design ASCII art
	void loginDesign()
	{
		cout << endl << endl;
		
		
    	 cout << setw(90) << "======================================= " << endl;
	
	    setColor(5); // Set text color to purple 

	    cout << setw(92) << "  _     ___   ____   ___ _   _        " << endl;
	    cout << setw(92) << " | |   / _ \\ / ___| |_ _| \\ | |       " << endl;
	    cout << setw(92) << " | |  | | | | |  _   | ||  \\| |       " << endl;
	    cout << setw(92) << " | |__| |_| | |_| |  | || |\\  |       " << endl;
	    cout << setw(92) << " |_____\\___/ \\____| |___|_| \\_|       " << endl;
	    cout << setw(92) << "                                      " << endl;

	    setColor(7); // Reset text color to default

	     cout << setw(90) << "======================================= " << endl;
	}
	
	
	// Function to display the Description Banner
	void Description() 
	{
		cout << endl ;
		
    	cout << setw(102) << " ================================================================= " << endl;
	
    	setColor(5); // Set Purple color

    	cout << setw(100) << "  ____  _____ ____   ____ ____  ___ ____ _____ ___ ___  _   _  " << endl;
    	cout << setw(100) << " |  _ \\| ____/ ___| / ___|  _ \\|_ _|  _ \\_   _|_ _/ _ \\| \\ | | " << endl;
    	cout << setw(100) << " | | | |  _| \\___ \\| |   | |_) || || |_) || |  | | | | |  \\| | " << endl;
    	cout << setw(100) << " | |_| | |___ ___) | |___|  _ < | ||  __/ | |  | | |_| | |\\  | " << endl;
    	cout << setw(100) << " |____/|_____|____/ \\____|_| \\_\\___|_|    |_| |___\\___/|_| \\_| " << endl;

    	setColor(7); // reset color
		
		cout << endl;
		
    	cout << setw(102) << " ================================================================= " << endl;
	}
	
	
	// Function to display the SignUp Description
	void SignUpDescription()
	{
		cout << endl;
		
		
		setColor(5); // set purple color	
		cout << setw(98) << "Follow these steps to create your account successfully: " << endl << endl;
		
		
		setColor(7);
		cout << setw(102) << " ================================================================= " << endl;
		
		cout << endl;
		cout << setw(40) << "1.";
		
		setColor(5);
		cout <<"Choose a Unique Username: " << endl;
		
		setColor(7);
		cout << setw(69) << " Your username must be unique " << endl;
		
		cout << endl;
		cout << setw(40) << "2.";
	
		setColor(5);
		cout <<"Set a password: " << endl;
		
		setColor(7);
		cout << setw(88) << "  The password must be at least 7 characters long." << endl;
		
		cout << endl;
		cout << setw(40) << "3.";
		
		setColor(5);
		cout <<"Set Confirm password: " << endl;
		
		setColor(7);
		cout << setw(97) << "  Re-enter the same password in the Confirm Password field." << endl;
		
		cout << endl;
		cout << setw(40) << "4.";
		
		setColor(5);
		cout <<"Set Phone No: " << endl;
		
		setColor(7);
		cout << setw(98) << "  Provide a valid phone number containing exactly 11 digits." << endl;
		
		cout << endl << endl;
		cout << setw(102) << " ================================================================= " << endl;
		
		cout << endl;
		setColor(5);
		
		cout << setw(81) << "Press [N] for Continue " << endl;
		setColor(7);
		
	}
	
	
	// Function to display the Description Banner
	void LogDescription() 
	{
		cout << endl ;
    	cout << setw(113) << " ======================================================================================= " << endl;
	
    	setColor(5); // Purple Color

    	cout << setw(100) << "  ____  _____ ____   ____ ____  ___ ____ _____ ___ ___  _   _  " << endl;
    	cout << setw(100) << " |  _ \\| ____/ ___| / ___|  _ \\|_ _|  _ \\_   _|_ _/ _ \\| \\ | | " << endl;
    	cout << setw(100) << " | | | |  _| \\___ \\| |   | |_) || || |_) || |  | | | | |  \\| | " << endl;
    	cout << setw(100) << " | |_| | |___ ___) | |___|  _ < | ||  __/ | |  | | |_| | |\\  | " << endl;
    	cout << setw(100) << " |____/|_____|____/ \\____|_| \\_\\___|_|    |_| |___\\___/|_| \\_| " << endl;

    	setColor(7); // Reset Color
		
		cout << endl;
    	cout << setw(113) << " ======================================================================================= " << endl;
	}
	
	
	
	// Function to display the LogIn Description
	void LogInDescription()
	{
		cout << endl;
		
		setColor(5);
		cout << setw(96) << "Follow these steps to Login your account successfully " << endl << endl;
		
		setColor(7);
		cout << setw(113) << " ======================================================================================= " << endl;
		
		cout << endl;
		cout << setw(40) << "1.";
		
		setColor(5);
		cout <<"Enter your username or Gmail address " << endl;
		
		setColor(7);
		cout << endl;
		cout << setw(40) << "2.";
		
		setColor(5);
		cout <<"Enter your password" << endl;
		
		setColor(7);
		cout << endl;
		cout << setw(40) << "3.";
		
		setColor(5);
		cout <<"To change your password: " << endl;
		
		setColor(7);
		cout << setw(101) << "Provide your username, current password, and the new password." << endl;
		
		cout << endl;
		cout << setw(40) << "4.";
		
		setColor(5);
		cout <<"If you've forgotten your password: " << endl;
		
		setColor(7);
		cout << setw(109) << "Enter your username and the phone number associated with your account." << endl;
		
		cout << endl << endl;
		cout << setw(113) << " ======================================================================================= " << endl;
		
		cout << endl;
		setColor(5);
		
		cout << setw(81) << "Press [N] for Continue " << endl;
		setColor(7);
		
	}
	
	
	// Function to show Banner for ForGet Password
	void Fpassword()
	{
	    cout << endl;
	    cout << setw(116) << "============================================================================================" << endl;
	    
	    setColor(5); // Set Purple Color
	    
	    cout << setw(115) << "  _____ ___  ____   ____ _____ _____   ____   _    ____ ______        _____  ____  ____   " << endl;
	    cout << setw(115) << " |  ___/ _ \\|  _ \\ / ___| ____|_   _| |  _ \\ / \\  / ___/ ___\\ \\      / / _ \\|  _ \\|  _ \\  " << endl;
	    cout << setw(115) << " | |_ | | | | |_) | |  _|  _|   | |   | |_) / _ \\ \\___ \\___ \\\\ \\ /\\ / / | | | |_) | | | | " << endl;
	    cout << setw(115) << " |  _|| |_| |  _ <| |_| | |___  | |   |  __/ ___ \\ ___) |__) |\\ V  V /| |_| |  _ <| |_| | " << endl;
	    cout << setw(115) << " |_|   \\___/|_| \\_\\\\____|_____| |_|   |_| /_/   \\_\\____/____/  \\_/\\_/  \\___/|_| \\_\\____/  " << endl;
	    
	    setColor(7); // Set Reset Color
	    
	    cout << endl;
		cout << setw(116) << "============================================================================================" << endl;
	    cout << endl;
	}

	
	// Function to Asci Design to ChatBot Prompt Interface
	void Chat()
	{

		cout << endl << endl;
		cout << setw(125) << "=====================================================================================================================================" << endl;
		cout << endl;
		
		setColor(5); // purple Color
		
		cout << setw(102) << " I am a helpful AI. I am designed to help you with a variety of task" << endl << endl;
		
		setColor(7); // Reset Color
	
		DateAndDay(); // Date and day Shoe Function
		
		cout << endl;
		cout << setw(125) << "=====================================================================================================================================" << endl;
		
		cout << endl;
		cout << setw(125) << "Enter Your Prompt: ______________________________________________________________________________________________" <<endl;    
    	
		setColor(7);
    	cout << endl;
		
		cout << setw(125) << "=====================================================================================================================================" << endl;
		
		
	}
	
	
	// this function for asci design of Account Deactivate Error
	void RemoveAccount() 
	{
	    cout << endl << endl;
	
	    cout << setw(110) << "====================================================================================" << endl;
	
	    setColor(5); // pruple color
	
	    cout << setw(98) << "  ____  _____    _    ____ _____ _____     ___  _____ _____ " << endl;
	    cout << setw(98) << " |  _ \\| ____|  / \\  / ___|_   _|_ _\\ \\   / / \\|_   _| ____|" << endl;
	    cout << setw(98) << " | | | |  _|   / _ \\| |     | |  | | \\ \\ / / _ \\ | | |  _|  " << endl;
	    cout << setw(98) << " | |_| | |___ / ___ \\ |___  | |  | |  \\ V / ___ \\| | | |___ " << endl;
	    cout << setw(98) << "  |____/|_____/_/   \\_\\____| |_| |___|  \\_/_/   \\_\\_| |_____|" << endl;
	
	    cout << endl;
	
	    setColor(7); // reset color
	
	    cout << setw(110) << "====================================================================================" << endl;
	}
	
	
	// this function for Guest Mode interface design
	void GuestMode()
	{
		system("cls"); // Clear Screen
		
	    cout << endl << endl << endl << endl << endl << endl;
	
	    cout << setw(110) << "========================================================================================" << endl;
	
	    cout << endl;
	    setColor(5); // purple color
	
	    cout << setw(100) << "   _____ _    _ ______  _____ _______   __  __  ____  _____  ______ " << endl;
	    cout << setw(100) << "  / ____| |  | |  ____|/ ____|__   __| |  \\/  |/ __ \\|  __ \\|  ____|" << endl;
	    cout << setw(100) << " | |  __| |  | | |__  | (___    | |    | \\  / | |  | | |  | | |__   " << endl;
	    cout << setw(100) << " | | |__| |  | |  __|  \\___ \\   | |    | |\\/| | |  | | |  | |  __|  " << endl;
	    cout << setw(100) << " | |____| |__| | |____ ____) |  | |    | |  | | |__| | |__| | |____ " << endl;
	    cout << setw(100) << "  \\_____| _____/|______|_____/   |_|    |_|  |_|\\____/|_____/|______|" << endl;
	    cout << setw(100) << "                                                                   " << endl;
	    cout << setw(100) << "                                                                   " << endl;
	
	    setColor(7); // reset color
	
	    cout << setw(110) << "========================================================================================" << endl;
	    
	    cout << endl;
	    setColor(5); // purple color
	    cout << setw(40) << "Notice:";
	    
	    setColor(7);
	    cout << setw(15) << " Guest Mode Active" << endl;
	    
	    setColor(5); // pruple color
	    
	    cout << endl;
	    cout << setw(99) << "You are currently in guest mode. Please note that your history and" << endl;
	    cout << setw(97) << "preferences will not be saved after this session. If you like to" << endl;
	    cout << setw(100) << "etain your history or personalize your experience, consider signing" << endl;
	    cout << setw(59) << " in or creating an account." << endl;
	    
	    setColor(7); // reset color
	    
	    cout << endl;
	    cout << setw(110) << "========================================================================================" << endl;
	}
		
		
	// this function for asci design History banner
	void HistoryDesign() 
	{
	    cout << endl << endl << endl;
	    
	    cout << setw(110) << "===============================================================================" << endl;
	    
	    setColor(5); // purple color
	    
	    // ASCII Art for "HISTORY"
	    cout << setw(90) << " _   _ ___ ____ _____ ___  ______   __" << endl;
	    cout << setw(90) << " | | | |_ _/ ___|_   _/ _ \\|  _ \\ \\ / /" << endl;
	    cout << setw(90) << " | |_| || |\\___ \\ | || | | | |_)|\\ V / " << endl;
	    cout << setw(90) << " |  _  || | ___) || || |_| |  _ < | |  " << endl;
	    cout << setw(90) << " |_| |_|___|____/ |_| \\___/|_| \\_\\|_|  " << endl;
	    
	    setColor(7); // reset color
	    
	    cout << endl;
	    cout << setw(110) << "===============================================================================" << endl;
	}
	
	
	/////////////////////////////////////////////////
	//  Show Error and Successful Output with color
	/////////////////////////////////////////////////
		
		
	// Red Error For Exinting User
	void UserExistError()
	{
		setColor(4);
		cout << endl;
		PlaySound(TEXT("D:\\Semester 3\\ChatBot\\Code\\sound\\fail.wav"), NULL, SND_FILENAME);
		cout << setw(80) << " User Already Exist " << endl;
		setColor(7); 
	}
	
	
	// Red Error For phone length <> 11
	void PhoneNumber()
	{
		setColor(4);
		cout << endl;
		PlaySound(TEXT("D:\\Semester 3\\ChatBot\\Api\\ahmad\\sound\\fail.wav"), NULL, SND_FILENAME);
		cout << setw(79) << " Invalid Phone No " << endl;
		setColor(7);
	}
	
	
	// Red Error For password length
	void Password()
	{
		setColor(4);
		cout << endl;
		PlaySound(TEXT("D:\\Semester 3\\ChatBot\\Api\\ahmad\\sound\\fail.wav"), NULL, SND_FILENAME);
		cout << setw(86) << " Password Must Be 7 Characters Long " << endl;
		setColor(7);	
	}
	
	
	// Red Error For wrong password
	void ConfirmPassword()
	{
		setColor(4);
		cout << endl;
		PlaySound(TEXT("D:\\Semester 3\\ChatBot\\Api\\ahmad\\sound\\fail.wav"), NULL, SND_FILENAME);
		cout << setw(83) << " Password Does Not Match " << endl;
		setColor(7);
	}
	
	
	// Red Error for wrong Login
	void LoginError()
	{
		setColor(4);
		cout << endl;
		PlaySound(TEXT("D:\\Semester 3\\ChatBot\\Api\\ahmad\\sound\\fail.wav"), NULL, SND_FILENAME);
		cout << setw(80) << " Login Unsuccessfull " << endl;
		setColor(7);
	}
	
	
	// Error For invalid Username
	void ChangePasswordU()
	{
		setColor(4);
		cout << endl;
		PlaySound(TEXT("D:\\Semester 3\\ChatBot\\Api\\ahmad\\sound\\fail.wav"), NULL, SND_FILENAME);
		cout << setw(87) << " Invalid UserName " << endl;
		setColor(7);
	}

	
	// Error For wrong password
	void ChangePassword()
	{
		setColor(4);
		cout << endl;
		PlaySound(TEXT("D:\\Semester 3\\ChatBot\\Api\\ahmad\\sound\\fail.wav"), NULL, SND_FILENAME);
		cout << setw(87) << " Invalid UserName " << endl;
		setColor(7);	
	}	
	
	
	// Error For Invalid phoneNo
	void ForgetPhoneNo()
	{
		setColor(4);
		cout << endl;
		PlaySound(TEXT("D:\\Semester 3\\ChatBot\\Api\\ahmad\\sound\\fail.wav"), NULL, SND_FILENAME);
		cout << setw(86) << " Invalid Phone No " << endl;
		setColor(7);
	}
	
	
	// green out for successfull signup 
	void SuccessfullSignUp()
	{
		setColor(2);
		cout << endl;
		PlaySound(TEXT("D:\\Semester 3\\ChatBot\\Api\\ahmad\\sound\\success.wav"), NULL, SND_FILENAME);
		cout << setw(79) << " SignUp Successfull" << endl;
		setColor(7);
	}
	
	
	// green out for successfull login 
	void SuccessfullLogin()
	{
		setColor(2);
		cout << endl;
		PlaySound(TEXT("D:\\Semester 3\\ChatBot\\Api\\ahmad\\sound\\success.wav"), NULL, SND_FILENAME);
		cout << setw(78) << " LogIn Successfull" << endl;
		setColor(7);
	}
	
	
	// purple output for choice
	void ShowSignUpError()
	{
		setColor(5);
		cout << endl;
		PlaySound(TEXT("D:\\Semester 3\\ChatBot\\Api\\ahmad\\sound\\fail.wav"), NULL, SND_FILENAME);
		cout << setw(90) << "Press [A] For again SignUp & [E] For Exit" << endl;
		setColor(7);
	}
	
	
	//	purple output for choice
	void ShowLogInError()
	{
		setColor(5);
		cout << endl << endl;
		PlaySound(TEXT("D:\\Semester 3\\ChatBot\\Api\\ahmad\\sound\\fail.wav"), NULL, SND_FILENAME);
		cout << setw(101) << "Press [A] For Again & [F] For Forget Password & [E] For Exit" << endl;
		setColor(7);
	}
	
	
	// red output for forget error
	void ForgetError()
	{
		setColor(4);
		cout << endl;
		PlaySound(TEXT("D:\\Semester 3\\ChatBot\\Api\\ahmad\\sound\\fail.wav"), NULL, SND_FILENAME);
		cout << setw(76) << "Invalid Data " << endl;
		setColor(7);
	}
	
	
	// green output for change password
	void ForgetPasswordSuccessfully()
	{
		setColor(2);
		PlaySound(TEXT("D:\\Semester 3\\ChatBot\\Api\\ahmad\\sound\\success.wav"), NULL, SND_FILENAME);
		cout << setw(87) << "Password Change successfully" << endl;
		setColor(7);
	}
	
	
	// green output function use foremove account
	void RemoveAccountSuccessfully()
	{
		cout << endl;
		setColor(2);
		PlaySound(TEXT("D:\\Semester 3\\ChatBot\\Api\\ahmad\\sound\\success.wav"), NULL, SND_FILENAME);
		cout << setw(84) << " Account Deactivate Successfully " << endl;
		setColor(7);
	}
	
	
	// red output for remove account error
	void RemoveAccountError()
	{
		cout << endl;
		setColor(4);
		PlaySound(TEXT("D:\\Semester 3\\ChatBot\\Api\\ahmad\\sound\\fail.wav"), NULL, SND_FILENAME);
		cout << setw(75) << " Invalid Data " << endl;
		setColor(7);
	}
	
	
	
	///////////////////////////
	//     Sign-Up Box 
	///////////////////////////
	
	
	// box for SignUp 
	void SignUpBoxDesign() 
	{
    	int colorAttribute = 7 + (5 * 16); // Combine text and background colors
    	setColor(colorAttribute); 

    	// Move to the specified starting position
    	gotoxy(64,28);

    	for (int i = 0; i < 1; ++i) 
		{
	        // For each row, move to the correct position
	        gotoxy(64, 28 + i);
	
	        // Draw the box content (width of the box)
	        for (int j = 0; j < 1; ++j) {
	        cout << " Sign Up ";
	        }
    	}

    	setColor(7); // Reset to default colors (white text on black background)
	}
    
    
    // box for Login 
    void LogInBoxDesign() 
	{
    	int colorAttribute = 7 + (5 * 16); // Combine text and background colors
    	setColor(colorAttribute); 

    	// Move to the specified starting position
    	gotoxy(66,23);

    	for (int i = 0; i < 1; ++i) {
        // For each row, move to the correct position
        gotoxy(66, 23 + i);

        // Draw the box content (width of the box)
        for (int j = 0; j < 1; ++j) {
        cout << " Log In ";
        }
    }

    setColor(7); // Reset to default colors (white text on black background)
}
    
	
};



///////////////////////////////////////
//  Class Error (for Error Handling)    
///////////////////////////////////////

class Error 
{
	public:
	
    	// Create Template
    	template <typename ID>
    	// this function is used to check if the username exists
    	bool UserIdExist(const ID& userid) 
		{
	        string n, i, g, p, pa, cp;
	        ifstream Read("UserInfo.txt");
	        while (Read >> n >> i >> g >> p >> pa >> cp) 
			{
	            if (i == userid) 
				{
	                Read.close();
	                return true;
	            }
	        }
	        Read.close();
	        return false;
	    }

    
		// Create Template
	    template <typename P>
	    // this function is used to check password length
	    bool passlenghtcheck(const P& password) 
		{
       		 return password.length() >= 7;
    	}

    
		// Create Template
    	template <typename N>
    	// this function is used to check phone number length
    	bool phonelenghtcheck(const N& phoneNo) 
		{
    	    return phoneNo.length() == 11;
    	}

    
		// Create Template
    	template <typename A, typename C>
    	// this function checks if password matches confirm password
    	bool checkpassword(const A& password, const C& confirm) 
		{
        	return password == confirm;
    	}

    
    	// create Template
		template <typename Ui, typename Ph, typename a>
		// this function is use for forget password and confirm user and cahnge password
		bool Forgetpassword(const Ui& userid, const Ph& phoneNo, const a& password) 
		{
    		string n, u, g, p, pa, cpa;
    		bool isUpdated = false;

    		ifstream Read("UserInfo.txt");
    		if (!Read.is_open()) 
			{
				return false;
    		}

    		ofstream TempFile("TempUserInfo.txt");
    		if (!TempFile.is_open()) 
			{
	
    	    	Read.close();
        		return false;
    		}

    		while (Read >> n >> u >> g >> p >> pa >> cpa) 
			{
        
		
        		if (u == userid && p == phoneNo) 
				{
           
        	    	pa = password;
        	    	cpa = password;
        	    	isUpdated = true;
        	    
        		}

        		TempFile << n << " " << u << " " << g << " " << p << " " << pa << " " << cpa << endl;
    		}

    		Read.close();
    		TempFile.close();

    		if (isUpdated) 
			{
        		remove("UserInfo.txt");
        		rename("TempUserInfo.txt", "UserInfo.txt");
    		}
			else 
			{
        		remove("TempUserInfo.txt");
    		}

    		return isUpdated;
		}


		// Create Template
    	template <typename U, typename P>
		// this function is use for check login 
		bool verifyLogin(const U& username, const P& password) 
		{
    		string n, i, g, p, pa, cp;
    		ifstream Read("UserInfo.txt");

    		while (Read >> n >> i >> g >> p >> pa >> cp) 
    		{
        
    		    if (i == username && pa == password) 
    		    {

        		    Read.close();
        		    return true;
        		    break;
        		}
        		else if(g == username && pa == password)
        		{
        			Read.close();
        		    return true;
        		    break;
				}
    		}

    		Read.close();
    		return false;
		}
    
    	
    	// Create Tempelate
    	template <typename U, typename P>
    	// this function is use to remove user data
		bool DeleteUser(const U& userid, const P& phoneNo) 
		{
		    string name, username, email, phone, password, confirmPassword;
		    bool isDeleted = false;
		
		    ifstream Read("UserInfo.txt");
		    if (!Read.is_open()) 
			{
	
		        return false;
		    }
		
		    ofstream TempFile("TempUserInfo.txt");
		    if (!TempFile.is_open()) 
			{
	
		        Read.close();
		        return false;
		    }
		
	
		    while (Read >> name >> username >> email >> phone >> password >> confirmPassword) 
			{
		        if ((username == userid || email == userid ) && password == phoneNo) 
				{
		            isDeleted = true; // Skip writing this line to the temp file
		            continue;
		        }
		        
		        TempFile << name << " " << username << " " << email << " "
		                 << phone << " " << password << " " << confirmPassword << endl;
		    }
		
		    Read.close();
		    TempFile.close();
		
		   
		    if (isDeleted) 
			{
		        if (remove("UserInfo.txt") != 0) {
	
		            return false;
		        }
		        if (rename("TempUserInfo.txt", "UserInfo.txt") != 0) {
	
		            return false;
		        }
		    } 
			else 
			{
		        remove("TempUserInfo.txt"); // Cleanup temp file if no deletion occurred
		    }
		
		   	return isDeleted;
		}
	
	    
};



////////////////////////////////////////////////////////////////////
//  Class Node (constructor for Create Circular Double Link list)
////////////////////////////////////////////////////////////////////

class Node
{
	public:
		
		// variable
		string userName, 
				userId,
				Gmail,
				PhoneNo,
				Password,
				ConfirmPassword;
			
			Node* next; 
			Node* prev;	   
		
		// Constructor for create Node
		Node(string UName, string UId, string Mail, string Phone, string Pass, string CPass)
		{
			// Variable stored user data
			this->userName = UName;
			this->userId   = UId;
			this->Gmail    = Mail;
			this->PhoneNo  = Phone;
			this->Password = Pass;
			this->ConfirmPassword = CPass;
				
			// Address Pointer	
			Node* next = this;
			Node* prev = this;
					
		}		    	
			
	};




////////////////////////////////////////////
// class FileHandling  (Save Data In File)
////////////////////////////////////////////

class FileHandling
{
	public:
		
		
	// Function for saveing data for each node	
	void saveInFile(Node* node)
	{
		string fileName = "UserInfo.txt";
		
		// createe file
    	ofstream file(fileName, ios::app);
    	
    	// open file
    	if (file.is_open()) 
		{
    	   file << node->userName << " " 
			<< node->userId << " " 
			<< node->Gmail << " " 
			<< node->PhoneNo << " " 
			<< node->Password << " " 
			<< node->ConfirmPassword 
			<< endl;
            		
    	    file.close();
        		
		} 
		else
		{
			system("cls");
		}
			
	}
	
	
	// Function for saving data for query 
    void saveData(const string& question) 
	{
        
        // save question in query file
        ofstream queryFile("query.txt"); 
        if (queryFile.is_open()) 
		{
            queryFile << question << "\n";
            queryFile.close();
        } 
		else 
		{
			return;
        }

        // save question in query_backup in appondend mode
        ofstream backupFile("query_backup.txt", ios::app);
        if (backupFile.is_open()) 
		{
            backupFile << question << "\n";
            backupFile.close();
        } 
		else 
		{
            return;
        }


    }
	
	
	
	// Function for show query history
    void showHistory() 
	{
		// design class object
		Design design;
		
		// read data for history file
        ifstream queryFile("query_backup.txt");
        if (queryFile.is_open()) 
		{
			
            string line; // variable
            int i=0;
            int y=12;
            
            
            design.HistoryDesign(); // history design banner
            
            while (getline(queryFile, line)) 
			{
				i++;
				design.gotoxy(49,y++);
				design.setColor(5);
                cout<< "0" << i << ". " ;
                design.setColor(7);
				cout<< line << "\n";
            }
            cout << endl;
            queryFile.close();
            cout << endl;
	    	cout << setw(110) << "===============================================================================" << endl;
        } 
		else 
		{
            return;
        }
    }



    // Reads the response from the response file and displays it
    void showResponse() 
	{
        ifstream responseFile("response.txt");
        if (responseFile.is_open()) 
		{
            string line; // variable

			cout << endl << endl << endl;
            while (getline(responseFile, line)) 
			{
                cout << line << "\n";
            }
            responseFile.close();
            
            // interface  Design
            cout << endl << endl;
            cout << setw(125) << "=====================================================================================================================================" << endl;
        } 
		else 
		{
            return;
        }
    }

};	



//////////////////////////////////
//  Class Python For Integration
//////////////////////////////////

class Python
{
	public:
		
		// function for integration python
		void Integration() 
		{
        	int result = system("python Gemini.py");  // Execute the Python script
        	if (result != 0) 
			{
            	cout << "Error: Failed to execute Python script.\n";
        	}
        	
    	}
    	
};



/////////////////////////////////
// Class ChatBot (Drived Class)
////////////////////////////////////////////////////
//  FileHandling(Base), Python(Base), Design(Base)
////////////////////////////////////////////////////
// Multiple Inheritance
////////////////////////

class ChatBot:public FileHandling, public Python,public Design
{
	public:
		
	// varibale	
    string userQuestion;


	// Prompt function
    void Prompt() 
	{
		
		// Clear Screen
	    system("cls"); 
	    gotoxy(0, 0); 
	
	    Design::Chat(); // Chat Bot Interface Design
	
	    setColor(5); // Purple
	    cout << endl;
	    
		// Taking Input
		gotoxy(0, 12);
		gotoxy(31, 12); 
	    getline(cin,userQuestion);
	
	    
	    FileHandling::saveData(userQuestion);   // Function For Save Query in file
	    
		Python::Integration(); // Function For Run Python
	
	    FileHandling::showResponse(); // Function For Show Response
	
	    ChatBot::Choice(); // Switch Function
	}
	
	
	// prompt Function
	void Prompt2() 
	{
		cin.ignore();
		
		// Clear Screen
	    system("cls"); 
	    gotoxy(0, 0); 
	
	    Design::Chat(); // Chat Bot Interface Design
	
	    setColor(5); // Purple
	    cout << endl;
	    
	    // Taking Input
	    gotoxy(0, 12);
		gotoxy(31, 12); 
		
		// Moving Curser
		cout << "\x1b[A";
		cout << "\x1b[A";
		
		// Taking Input
	    getline(cin,userQuestion);

	    FileHandling::saveData(userQuestion);  // Function For Save Query in file
	    
	    Python::Integration(); // Function For Run Python
	
	    FileHandling::showResponse(); // Function For Show Response
	
	    ChatBot::Choice(); // Switch Function
	    
	}
	
    
    // switch for prompt
    void Choice() 
	{
    	
    	cout << endl;

		setColor(5);
        cout << setw(95) << "Press [H] for History, [A] for Again, or [E] to Exit"<< endl;
        setColor(7);
        char ch;
        cin >> ch;
		  
		  
        switch (tolower(ch)) 
		{
        case 'h':
			system("cls"); // Clear screen
            FileHandling::showHistory();  // Call History Function
            Choice();   // Again Choice Function
            break;
            
        case 'a':
        	cin.ignore(); // Remove data
            this->Prompt2();   // Re-call function of prompt
            break;
            
        case 'e':
            return; 
			 
        default: 
            return;  
        }
    }	
	
	
	// Guest Prompt
	void GuestPrompt() 
	{
		
		// Clear Screen
	    system("cls"); 
	    gotoxy(0, 0); 
	
	    Design::Chat(); // Chat Bot Interface Design
	
	    setColor(5); // Purple
	    cout << endl;
	    
		// Taking Input
		gotoxy(0, 12);
		gotoxy(31, 12); 
	    getline(cin,userQuestion);
	
	    
	    FileHandling::saveData(userQuestion);   // Function For Save Query in file
	    
		Python::Integration(); // Function For Run Python
	
	    FileHandling::showResponse(); // Function For Show Response
	
	    ChatBot::GuestChoice(); // Switch Function
	}
	
	
	// Gyest Prompt2
	void GuestPrompt2() 
	{
		
		
		
		// Clear Screen
	    system("cls"); 
	    gotoxy(0, 0); 
	
	    Design::Chat(); // Chat Bot Interface Design
	
	    setColor(5); // Purple
	    cout << endl;
	    
	    // Taking Input
	    gotoxy(0, 12);
		gotoxy(31, 12); 
		
		// Moving Curser
		cout << "\x1b[A";
		cout << "\x1b[A";
		
		// Taking Input
	    getline(cin,userQuestion);

	    FileHandling::saveData(userQuestion);  // Function For Save Query in file
	    
	    Python::Integration(); // Function For Run Python
	
	    FileHandling::showResponse(); // Function For Show Response
	
	    ChatBot::GuestChoice(); // Switch Function
	    
	}
	
	
	// Guest Prompt Choice 
	void GuestChoice() 
	{
    	
    	cout << endl;
		setColor(5); // Purple Color
		
        cout << setw(95) << "Press [A] for Again, or [E] to Exit"<< endl;
        
        setColor(7); // Reset Color
        
        // variable
        char ch;
        cin >> ch;
		  
		// switch  
        switch (tolower(ch)) 
		{
	        case 'a':
	        	cin.ignore(); // Remove data
	            this->GuestPrompt2();   // Re-call function of prompt
	            break;
	            
	        case 'e':
	            return; 
				 
	        default: 
	            return;  
        }
    }	


};



//////////////////////////
// class For Create Account
////////////////////////////////////////////////////////////////////
// Design(Base Class), Error(Base Class), FileHandling(Base Class)
////////////////////////////////////////////////////////////////////
// SignUp (Derived Class)
//////////////////////////
// Multiple Inheritance
/////////////////////////

class signUp:public Error, public ChatBot
{
	private:
		
		// pointer
		Node* head = NULL;
		
	public:
		
		// Add user data in Node
		void AddUserInfo(string Name, string Id, string mail, string phone,string passw, string cpassw)
		{
				// Create new node
				Node* newNode = new Node(Name, Id, mail, phone, passw, cpassw);
				
				
				// for first node 
				if(head == NULL)
				{
					head = newNode; 
				}
				else
				{
					Node* temp = head;
					temp->prev = newNode;
					newNode->next = head;
					newNode->prev = temp;
					head->prev = newNode;
				}
				
				FileHandling::saveInFile(newNode); // save newnode data in file
			}
		
		
		// For signup 
		void show()
		{
			// variable to store data 
			char choice;
			string name, id, gmail, phone, pass, cpass;
			
			
			system("cls"); // clear screen
			
			
			// function for description
			Design::Description();
			Design::SignUpDescription();
			
			// pause & clear screen
			system("pause");
			system("cls");
			
			// signup banner
			cout << endl << endl;
			Design::SignUpDesign();
			
			setColor(5); // purple color
			
			cout << endl;
			cout << setw(88) << "FullName: ___________________________ " << endl;
			cout << endl;
			cout << setw(88) << "UserId:   ___________________________ " << endl;
			cout << endl;
			cout << setw(88) << "Gamil:    ___________________________ " << endl;
			cout << endl;
			cout << setw(88) << "Phone No: ___________________________ " << endl;
			cout << endl;
			cout << setw(88) << "Password: ___________________________ " << endl;
			cout << endl;
			cout << setw(88) << "Confirm:  ___________________________ " << endl;
			
			cout << endl << endl << endl << endl << endl << endl << endl << endl;
			
			setColor(7); // reset color
			cout << setw(91) << "=========================================== " << endl;

			Design::SignUpBoxDesign(); // function for box
			 
			setColor(7); // reset color
			
			// taking input on specific position
			gotoxy(60,11);
			cin >> name;
			gotoxy(60,13);
			cin >> id;
			gotoxy(60,15);
			cin >> gmail;
			gotoxy(60,17);
			cin >> phone;
			gotoxy(60,19);
			cin >> pass;
			gotoxy(60,21);
			cin >> cpass;
			
			
			Design::SignUploginAnimation(); // function for loading animation
			
			
			// check userid
			if(UserIdExist(id))
			{
				Design::UserExistError();
				cout << endl << endl << endl << endl;
				Design::ShowSignUpError();
				cin >> choice;
				signUp::wrong(choice); 
		
			}
			
			// check phone No length
			else if(!phonelenghtcheck(phone))
			{
				Design::PhoneNumber();
				cout << endl << endl << endl << endl;
				Design::ShowSignUpError();
				cin >> choice;
				signUp::wrong(choice);

			}
			
			// check password length
			else if(!passlenghtcheck(pass))
			{
				Design::Password();
				cout << endl << endl << endl << endl;
				Design::ShowSignUpError();
				cin >> choice;
				signUp::wrong(choice);
			}
			
			// check password & confirm password
			else if(!checkpassword(pass,cpass))
			{
				Design::ConfirmPassword();
				cout << endl << endl << endl << endl;
				Design::ShowSignUpError();
				cin >> choice;
				signUp::wrong(choice);
			}
			
			// successfull create account
			else
			{
				Design::SuccessfullSignUp();
				signUp::AddUserInfo( name, id, gmail, phone, pass, cpass);
				
				system("pause");
				system("cls");
				
				ChatBot::Prompt2();
				

			}	
		}
		
			
		// switch case function	
		void wrong(char choice)
		{
			system("cls"); // clear screen
			switch(tolower(choice))	
			{
				case 'a':
					signUp::show(); // again call function
					break;
				
				case 'e':
					break;
				
				default:
					break;
					return;		
			}
		}	
			
};



//////////////////////////
// class For Login
///////////////////////////////////////////
// Design(Base Class), Error(Base Class)
///////////////////////////////////////////
// LogIn (Derived Class)
//////////////////////////
// Multiple Inheritance
/////////////////////////

class LogIn:public Error, public ChatBot
{
	private:
	
		// variables 
    	string username;
    	string password;
		char choi;
		
	public:
	
		// Function for login
    	void loginUser() 
    	{
    		
    		system("cls");
    		
    		// Function for Show Description
			Design::LogDescription();
			Design::LogInDescription();
		
		
			cout << endl << endl;
			
			// Pause & clear Screen
			system("pause");
			system("cls");
		
			
			// Show Login Banner
			cout << endl << endl <<endl;
			Design::loginDesign();
        	cout << endl;
        
        	setColor(5); // purple
        
    		cout << setw(87) << "UserName: ______________________ " << endl;
    		cout << endl;
    		cout << setw(87) << "Password: ______________________ " << endl;
    		cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    	
    		setColor(7); // reset
    	
    		Design::LogInBoxDesign(); // Login Box
    		
    		cout << endl << endl;
			 cout << setw(90) << "======================================= " << endl;
    	
    		// Taking Input 
	    	gotoxy(64, 14);
	    	cin >> username; 
	    	gotoxy(64, 16);
	    	cin >> password; 
	
	    	Design::LogInloginAnimation();  // Loading Animation
	
	
			// Verifiy Username & Password
	        if (verifyLogin(username, password)) 
	        {
	            Design::SuccessfullLogin();
	            cout << endl << endl << endl << endl;
	            
	        	system("pause");
	        	system("cls");
	        	
	        	ChatBot::Prompt2();
	        } 
	        
	        // Show if Login Incorrect
	        else 
	        {
	            Design::LoginError();
	            
	       		cout << endl << endl << endl;
	       		Design::ShowLogInError();
	       		
	       		// taking input for user
	       		char choice;
	       		cin >> choice;
	       		
	       		system("cls"); // Clear screen
	       		
	       		
	       		switch(tolower(choice))
	       		{
	       			case 'a':
	       				LogIn::loginUser(); // Function For Login
	       				break;
	       				
	       			case 'f':
					   LogIn::ForGetPassWord(); // Function For 
					   break;
					
					case 'e':
						cout << "Exit";
						break;
						
					default:
						return;	   	
				}
	        }
	    }
	
		
		// Function for Forget Password
		void ForGetPassWord()
		{
			// variable
			string user;
			string phoneNo;
			string NewPassword;
			string Confirm;
			
			
			cout << endl << endl << endl;
			
			Design::Fpassword(); // Forget Password Banner Design
			cout << endl;
			
			setColor(5); // purple color
			
			cout << setw(88) << "UserName: _________________________ " << endl;
			cout << endl;
			cout << setw(88) << "Phone No: _________________________ " << endl;
			cout << endl;
			cout << setw(88) << "New Password: _____________________ " << endl;
			cout << endl;
			cout << setw(88) << "Confirm Password: _________________ " << endl;
			cout << endl;
			
			setColor(7); // ResetColor
			
			cout << endl << endl << endl << endl;
	
			cout << setw(116) << "============================================================================================" << endl;
			
			setColor(5); 
			cout << endl;
			
			cout << setw(90) << "Press [A] For Try Again & [E] For Exit" << endl;
			
			setColor(7);
			
			
			// Taking Input For user at specific position
			
			gotoxy(62,14);
			cin >> user;
			gotoxy(62,16);
			cin >> phoneNo;
			gotoxy(66,18);
			cin >> NewPassword;
			gotoxy(70,20);
			cin >> Confirm;
			
			Design::ForGetloginAnimation(); // Loading animation
	
				
			// to check and verify username & phoneNo and update password	
			if(!Forgetpassword(user,phoneNo,NewPassword))
			{
				Design::ForgetError();
				cin >> choi;
				
				LogIn::TryAgainForget(choi); // call switch case function
				return;
				
			}
			
			// to check password length
			else if(!Error::passlenghtcheck(NewPassword))
			{
				Design::Password();
				cin >> choi;
				
				LogIn::TryAgainForget(choi); // call switch case function
				return;
				
			}
			
			// to check confirm and new password are equal
			else if(!Error::checkpassword(NewPassword,Confirm))
			{
				Design::ConfirmPassword();
				cin >> choi;
				
				LogIn::TryAgainForget(choi); // call switch case function
				
			}
			
			else
			{
				
				cout << endl;
				Design::ForgetPasswordSuccessfully(); // Output 
				cout << endl << endl << endl;
				
				system("pause");
				system("cls");
				
				ChatBot::Prompt2(); // Prompt Function
				
			}
		}
		
		
		// Switch Case Function
		void TryAgainForget(char choice)
		{
			// switch case
			switch(tolower(choice))
			{
				case 'a':
					
					system("cls"); // clear screen
					
					LogIn::ForGetPassWord(); // again call function
					break;
					
				case 'e':
					return;
					break;	
			}
		}
    	
    	
};



//////////////////////////////////
//  Class for DeActivate Account
//////////////////////////////////
//  Class DelAccount (Derived)
//////////////////////////////////
// Design(Based), Error(Based)
/////////////////////////////////
//	Multiple Inheritance
////////////////////////////////

class DelAccount: public ChatBot, public Error
{
	private:
		
		// variable
		string username;
		string password;
		
	public:
		
		// Function for DEactivate Account
		void Del()
		{
			// clear screen
			system("cls");
			cout << endl << endl;
			
			Design::RemoveAccount(); // Banner DEACTIVATE
			
			
			setColor(5); // Purple Color
			
			cout << endl << endl;
			cout << setw(94) << "UserName/Gamil : __________________________________" << endl;
			cout << endl;
			cout << setw(94) << "Password:        __________________________________" << endl;
			cout << endl << endl << endl << endl << endl;
			
			setColor(7); // ResetColor
			
			cout << setw(110) << "====================================================================================" << endl;
				
				
			gotoxy(60,14);
			cin >> username;
			gotoxy(60,16);
			cin >> password;
			
			
			Design::RemoveloginAnimation(); // Loading Animation
			
			
			// Verify Accounr Del
			if (Error::DeleteUser(username, password)) 
			{
	        	Design::RemoveAccountSuccessfully();
	        	return;
	    	}
	    	
	    	// Remove account
			else 
			{
	        	Design::RemoveAccountError(); // Error
	        	
	        	setColor(5); // purple Color
	        	cout << endl << endl;
	        	
	        	cout << setw(95) << " Press [A] For Again & [M] Main Menu & [E] for Exit" << endl;
	        	
	        	setColor(7); // Reset Color
	        	
	        	// variable 
				char ch;
	        	cin >> ch;
	        	
	        	// switch
	        	switch(tolower(ch))
	        	{
	        		case 'a':
	        			
	        			cin.ignore();
	        			this->Del(); // Again Call 
	        			break;
	        			
	        		case 'm':
					
						system("cls");
						Design::startingDesign(); // Go to Starting Interface
						break;
						
					case 'e':
						return;
						break;
						
					default:
						
						return;	
				}
	        	return;
	    	}		
		}


};



/////////////////////////////////////////
// Class GuestAccount use for GuestMood
//////////////////////////////////////////////
// ChatBot(Base Class), GuestAccount(Drived)
//////////////////////////////////////////////
// Single Inheritance
/////////////////////////

class GuestAccount:public ChatBot
{
	public:
		
		
		// This Function is use for guest mood
		void GuestModeOn()
		{
			Design::GuestMode(); // Asic Interface Of Guest Mode
			
			cout << endl << endl;
			system("pause"); // pause screen
			system("cls"); // clear screen
			
			cin.ignore(); // remove garbage value
			
			ChatBot::GuestPrompt2(); // call prompt function
			
		}
};



/////////////////////////////
// Main Function 
////////////////////////////

int main()
{
	freopen("nul", "w", stderr); // Remove garbage data to response file
	
	Design design; // Design Class Obj to call Start Function
	
	signUp SignUp; // SignUp Class Obj to call Show Function
	
	LogIn Login; // LogIn Class Obj to Call LoginUser Function
	
	DelAccount DeActivate; // DelAccount Class Obj to Call deL Function
	
	GuestAccount Guest; // GuestAccount Class Obj to call GuestModeOn Function
	
	//variable
	int choice;
	
	while (true) 
   {
        system("cls");  // clear screen
        
		design.startingDesign(); // starting design

        // Waiting for the user's input
        while (!_kbhit()) 
		{
            // Program halt
        }

      	// Storing the input in 'choice'
        choice = _getch() - '0'; // Convert the pressed character to integer (e.g., '1' -> 1) 

        switch (choice) 
		{
            case 1:
            	
            	// Play sound function
				PlaySound(TEXT("D:\\Semester 3\\ChatBot\\Api\\ahmad\\sound\\select.wav"), NULL, SND_FILENAME); 
				
				// signup function
    			SignUp.show();
                break;
                
            case 2:
            	
            	// play sound
				PlaySound(TEXT("D:\\Semester 3\\ChatBot\\Api\\ahmad\\sound\\select.wav"), NULL, SND_FILENAME); 
				
				// login function
                Login.loginUser();
                break;

            case 3:
            	
            	// play sound
            	PlaySound(TEXT("D:\\Semester 3\\ChatBot\\Api\\ahmad\\sound\\select.wav"), NULL, SND_FILENAME); 
            	
            	// guest mood function
                Guest.GuestModeOn();
                break;

            case 4:
            	
            	// play sound
            	PlaySound(TEXT("D:\\Semester 3\\ChatBot\\Api\\ahmad\\sound\\select.wav"), NULL, SND_FILENAME); 
            	
            	// del account function
                DeActivate.Del();
                break;
                
            
			case 5:
				
				// play sound
				PlaySound(TEXT("D:\\Semester 3\\ChatBot\\Api\\ahmad\\sound\\select.wav"), NULL, SND_FILENAME);
				break;
				
            default:
            	
            	// play sound
            	PlaySound(TEXT("C:\\Users\\imran\\OneDrive\\Documents\\DSA\\sound\\fail.wav"), NULL, SND_FILENAME);  
                cout << "Invalid selection" << endl;
                break;
        }
        
        _getch();  // waiting
    }

	return 0;
}
 







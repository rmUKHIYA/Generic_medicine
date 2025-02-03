
# Aushidhi Login and Medicine Database Project

## Overview

The **Aushidhi** project is a simple command-line application in C++ that allows users to log in, register, and search for information about medicines. The application stores user credentials and allows password retrieval. It also provides generic names for various branded medicines.

### Features:
- **Login System:** Users can log in using their registered username and password.
- **Registration System:** New users can register by creating a username and password.
- **Password Recovery:** If a user forgets their password, they can search by their username to retrieve the password.
- **Medicine Search:** Users can search for branded medicines and view their generic equivalents.

## Getting Started

### Prerequisites
To run this project, you will need:
- A C++ compiler (e.g., GCC, MinGW, or an IDE like Code::Blocks or Visual Studio).
- A basic understanding of C++ programming concepts.

### Files in this Project
1. **`main.cpp`:** This is the main C++ file containing the implementation of the login, registration, and password recovery system.
2. **`records.txt`:** A text file used to store user credentials (username and password). The file is created automatically when a user registers.
   
### How to Run
1. **Clone or Download the Project:**
   Download the source code or clone the repository to your local machine.

2. **Compile the Code:**
   Use any C++ compiler to compile the `main.cpp` file. For example, if using a command line:
   ```bash
   g++ main.cpp -o Aushidhi
   ```

3. **Run the Application:**
   After compiling, you can run the program. If you are using a terminal or command prompt:
   ```bash
   ./Aushidhi
   ```

4. **Interact with the Menu:**
   The program will present you with a menu to choose between logging in, registering, or recovering a forgotten password.

## Example Usage
### Menu Options:
1. **Login:** Enter your registered username and password to log in.
2. **Register:** Enter a new username and password to create a new account.
3. **Forgot Password:** If you forget your password, you can retrieve it by entering your remembered username.
4. **Exit:** Exit the program.

### Medicine Search:
After logging in, you can search for branded medicine names. For example:
- Enter "calpol" to get its generic name "paracetamol".
- Enter "calavam" to get "Amoxicillin & Potassium clavulanate".

## Error Handling
- If the login credentials do not match, the program will display an error message.
- If the medicine is not found in the database, the program will display a message saying "Sorry, not found".

## Troubleshooting
- Ensure that the `records.txt` file exists in the same directory as the executable. This file is where user credentials are stored.
- If you experience any issues with compilation or running the program, ensure your compiler is set up correctly and try using an IDE for easier compilation and debugging.

## License
This project is open-source and free to use for educational purposes. Please feel free to modify or extend the project as needed.


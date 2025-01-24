#include <iostream>
using namespace std;

// Function to register a new account
void register_account(string &registeredUsername,string &registeredPassword) {
    cout<<"Enter a new username: ";
    cin>>registeredUsername;  // Save the username

    string password;
    cout << "Enter a new password (minimum 6 characters): ";
    cin >> password;

    if (password.length() < 6) {
        cout << "Password must be at least 6 characters long.\n";
        return;
    }

    registeredPassword = password;  // Save the password

    cout << "Account successfully created!\n";
}

#include <iostream>
#include <string>
using namespace std;

// Function to handle user login
bool loginpage(string registeredUsername, string registeredPassword) {
    string inputUsername, inputPassword;
    int attempts = 3;

    // Attempt login
    while (attempts > 0) {
        cout << "Enter Username: ";
        cin >> inputUsername;

        cout << "Enter Password: ";
        cin >> inputPassword;

        if (inputUsername == registeredUsername && inputPassword == registeredPassword) {
            cout << "Login successful!\n";
            return true;  // Login successful
        } else {
            attempts--;
            cout << "Invalid Credentials. You have " << attempts << " attempt(s) left.\n";
        }
    }

    cout << "Too many failed attempts. Access denied.\n";
    return false;  // Login failed
}

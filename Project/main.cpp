#include<iostream>
#include<iomanip>
#include"Header.h"
#include"Menu_Display.h"
#include"Login.h"
#include"Register.h"
#include"Order_Summary.h"
#include"customize_order.h"
#include"Payment_Method.h"
#include"Admin_Panel.h"
using namespace std;
// Define the registered Username and registeredPassword
string registeredUsername = "";// --> Define an empty string or set a default value
string registeredPassword = "";// --> Define an empty string or set a default value

int main() {
    int choice;
    //The Boolean Variable to Check User is Login or Not
    bool isLoggedIn = false;
    // The Boolean Variable to track if an order has been placed Default Value is False if SomeOne will order This Will Turned to True
    bool orderPlaced = false;
    // This Will Print Header
    printHeader();
    // Order tracking (this can be expanded to store details in an array or database)
    string orders[MAX_ORDERS];
    int currentOrderCount = 0;

    while (true) {
        //ANSI Value of CYAN color is \033
        cout << "\033[1;36m";
        // Display main menu
        cout << "1. Display Menu\n";
        cout << "2. Login/Register\n";
        cout << "3. Admin Panel\n";
        cout <<"4. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;
        cout << "\033[0m";

        switch (choice) {
            case 1:
                if (isLoggedIn) {
                    // Menu and order flow
                    Display_Menu();
                    int menuChoice;
                    cout << "Enter Your Choice: ";
                    cin >> menuChoice;

                    string orderedItem;
                    // Default price between 480 and 550
                    double price = 500;
                    int quantity;

                    switch (menuChoice) {
                        case 1:
                        orderedItem = "Creamy Melt";
                        price = 530;
                        break;
                        case 2:
                        orderedItem = "Chicken Tikka";
                        price = 520;
                        break;
                        case 3:
                        orderedItem = "Veggie Supreme";
                        price = 500;
                        break;
                        case 4:
                        orderedItem = "BBQ Chicken";
                        price = 550;
                        break;
                        case 5:
                        orderedItem = "Margherita";
                        price = 480;
                        break;
                        default:
                        cout << "Invalid menu choice. Please try again.\n";
                        continue;
                    }
                    // Customize order and payment flow
                    CustomizeOrder(orderedItem, price);
                    cout << "Enter Quantity: ";
                    cin >> quantity;
                    double total_price = price * quantity;
                    double tax = total_price * 0.06;  // 6% tax
                    total_price += tax;

                    Order_Summary(orderedItem, quantity, total_price);

                    if (Payment_Method(total_price))
                    {
                         // Set flag when order is successfully placed
                        orderPlaced = true;
                        cout <<"\033[1;32mOrder Successfully Confirmed and Placed! Thank you for your purchase.\033[0m\n";

                        // Store the order in the order list
                        if (currentOrderCount < MAX_ORDERS) {
                            orders[currentOrderCount++] = orderedItem + " x" + to_string(quantity);
                        } else {
                            cout << "Maximum orders reached. Cannot store more orders.\n";
                        }
                    } else {
                        cout << "\033[1;31mOrder Cancelled.\033[0m\n";
                    }
                } else {
                    cout << "You need to log in first.\n";
                }
                break;

            case 2:
                // Login/Register flow
                int subChoice;
                cout << "\033[1;36m";
                cout << "1. Login\n";
                cout << "2. Register\n";
                cout << "\033[0m";
                cout <<"Enter Your Choice: ";
                cin >> subChoice;

                if (subChoice == 1)
                {
                    // Login flow
                    isLoggedIn = loginpage(registeredUsername, registeredPassword);
                }
                else if (subChoice== 2)
                {
                    // Register the user
                    register_account(registeredUsername, registeredPassword);
                    // After registration, auto-login or prompt the user to log in immediately
                    cout<< "Registration Successful! Please log in now.\n";
                    // Automatically log the user in after registration
                    isLoggedIn = loginpage(registeredUsername, registeredPassword);
                }
                else
                {
                    cout << "Invalid Choice Entered\n";
                }
                break;

            case 3:
                // Admin Panel access
                if (isLoggedIn)
                {
                    // Pass orders and count for admin to view
                    Admin_Panel(orders, currentOrderCount);
                }
                else {
                    cout << "Admin panel requires login.\n";
                }
                break;

            case 4:
                // Exit the program
                cout << "Thank you for using Pizza Box Online Ordering! Exiting...\n";
                return 0;

            default:
                cout << "Invalid Option Selected\n";
                break;
        }
    }
    return 0;
}

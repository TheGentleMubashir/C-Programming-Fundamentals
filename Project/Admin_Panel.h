#include <iostream>
#include <string>
using namespace std;

const int MAX_ORDERS = 5;  // Maximum number of orders

// Function to add a new order
void AddOrder(string orders[], int& currentOrderCount, const string& order) {
    if (currentOrderCount < MAX_ORDERS) {
        orders[currentOrderCount] = order;
        currentOrderCount++;
        cout << "Order added successfully.\n";
    } else {
        cout << "Order limit reached! Cannot add more orders.\n";
    }
}

// Function to view all orders
void ViewOrders(const string orders[], int currentOrderCount) {
    if (currentOrderCount == 0) {
        cout << "No orders placed yet.\n";
    } else {
        cout << "List of Orders:\n";
        for (int i = 0; i < currentOrderCount; ++i) {
            cout << "- " << orders[i] << "\n";
        }
    }
}

// Admin panel function to manage login and order actions
void Admin_Panel(string orders[], int& currentOrderCount) {
    string adminUsername = "Mubashir";
    string adminPassword = "123456";

    string inputUsername, inputPassword;

    // Admin login check
    cout << "\033[1;33m";
    cout << "------------------ Admin Login ------------------\n";
    cout << "Enter Username: ";
    cin >> inputUsername;

    cout << "Enter Password: ";
    cin >> inputPassword;

    if (inputUsername == adminUsername && inputPassword == adminPassword) {
        cout << "Login successful!\n";
        int choice;

        // Admin options menu
        cout << "------------------ Admin Panel ------------------\n";
        cout << "1. View All Orders\n";
        cout << "2. Update Menu\n";
        cout << "3. Add New Order\n";
        cout << "4. Exit Admin Panel\n";
        cout << "--------------------------------------------------\033[0m\n";

        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "\033[1;34m";
            cout << "------------------ Order List ------------------\n";
            ViewOrders(orders, currentOrderCount);  // View orders logic
            cout << "--------------------------------------------------\033[0m\n";
            break;

        case 2:
            cout << "\033[1;32m";
            cout << "------------------ Update Menu ------------------\n";
            // Update menu logic (this part can be implemented later)
            cout << "--------------------------------------------------\033[0m\n";
            break;

        case 3:
            cout << "\033[1;32m";
            cout << "------------------ Add New Order ------------------\n";
            {
                string newOrder;
                cout << "Enter new order details: ";
                cin.ignore();  // Clear any extra newline character from the input buffer
                getline(cin, newOrder);  // Get the entire line as a single order
                AddOrder(orders, currentOrderCount, newOrder);  // Add the order to the list
            }
            cout << "--------------------------------------------------\033[0m\n";
            break;

        case 4:
            cout << "Exiting Admin Panel.\n";
            break;

        default:
            cout << "Invalid choice. Please try again.\n";
            break;
        }
    } else {
        cout << "\033[1;31mIncorrect Username or Password. Access Denied.\033[0m\n";
    }
}

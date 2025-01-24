// payment_method.h
#include <iostream>
using namespace std;

bool Payment_Method(double total_price) {
    int paymentChoice;
    cout << "\n\033[1;34m---- Payment Options ----\n";
    cout << "1. Credit/Debit Card\n";
    cout << "2. Cash on Delivery\n";
    cout << "3. Cancel Order\n";
    cout << "--------------------------\033[0m\n";

    cout << "Choose Payment Option: ";
    cin >> paymentChoice;

    if (paymentChoice == 1) {
        string cardNumber, expiryDate, cvv;
        cout << "Enter Card Number: ";
        cin >> cardNumber;
        cout << "Enter Expiry Date (MM/YY): ";
        cin >> expiryDate;
        cout << "Enter CVV: ";
        cin >> cvv;

        cout << "\033[1;32mPayment of Rs. " << fixed << setprecision(2) << total_price 
             << " successfully processed.\033[0m\n";
        return true;
    } else if (paymentChoice == 2) {
        cout << "\033[1;32mYou selected Cash on Delivery. Your order will be delivered soon.\033[0m\n";
        return true;
    } else if (paymentChoice == 3) {
        cout << "\033[1;31mOrder Cancelled.\033[0m\n";
        return false;
    } else {
        cout << "\033[1;31mInvalid option. Please try again.\033[0m\n";
        return false;
    }
}

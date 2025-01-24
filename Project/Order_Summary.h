#include <iostream>
using namespace std;

void Order_Summary(string orderedItem, int quantity, double total_price)
{
    cout << "\n\033[1;33m---- Order Summary ----\n";
    cout << "Item Ordered: " << orderedItem << endl;
    cout << "Quantity: " << quantity << endl;
    cout << fixed << setprecision(2) << "Total Price: " << total_price <<" PKR "<< endl;
    cout << "-----------------------\033[0m\n";
}

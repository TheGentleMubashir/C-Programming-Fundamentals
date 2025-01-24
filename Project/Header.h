#include <iostream>
using namespace std;

void printHeader() {
    cout << "\033[1;32m"; // Green color for header text

    // Applying std::setw(50) to each line
    cout <<"--------------------------------------------------" << endl;
    cout <<"--------------------------------------------------" << endl;
    cout<< "-------Welcome to Pizza Box Online Ordering-------" << endl;
    cout << "--------------------------------------------------" << endl;
    cout<< "--------------------------------------------------" << endl;

    cout << "\033[0m"; // Reset color
}

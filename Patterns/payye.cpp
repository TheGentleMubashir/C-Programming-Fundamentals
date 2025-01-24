#include <iostream>
using namespace std;

int main() {
    int rows = 4; // Number of rows for the pattern

    // Loop through each row
    for (int i = 1; i <=rows; i++) {
        // Print spaces to create the alignment
        for (int j = 1; j <= rows - i - 1; j++) {
            cout << " ";
        }
        // Print stars
        for (int k = 1; k <= 5; k++) {
            cout << "*";
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}

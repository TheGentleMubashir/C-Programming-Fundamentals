#include <iostream>
using namespace std;

int main() {
    int n =10; // Height of the pattern

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Conditions to print the pattern of '2'
            if ((i == 0 && j > 0 && j < n - 1) ||   // Top horizontal line
                (i == n / 2) ||                     // Middle horizontal line
                (i == n - 1 && j > 0 && j < n - 1) || // Bottom horizontal line
                (j == 0 && i != 0 && i != n - 1 && i < n / 2) || // Left vertical line (top)
                (j == n - 1 && i > n / 2 && i != n - 1)) { // Right vertical line (bottom)
                cout<< "* ";
            } else {
                cout << "  "; // Spaces for alignment
            }
        }
        cout << endl; // Move to the next line after finishing a row
    }

    return 0;
}

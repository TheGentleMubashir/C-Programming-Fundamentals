#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;

    // Get the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    // Input elements in the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Armstrong numbers in the array are: ";

    // Check each number in the array
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int originalNum = num;
        int sum = 0;
        int digits = 0;

        // Calculate the number of digits in the number
        while (num != 0) {
            digits++;
            num /= 10;
        }

        num = originalNum;

        // Calculate the sum of powers of its digits
        while (num != 0) {
            int remainder = num % 10;
            sum += pow(remainder, digits);
            num /= 10;
        }

        // Check if the sum equals the original number
        if (sum == originalNum) {
            cout << originalNum << " ";
        }
    }

    return 0;
}

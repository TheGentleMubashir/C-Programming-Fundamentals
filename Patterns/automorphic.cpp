#include <iostream>
using namespace std;

int main() {
    int n = 25;
    int sq = n * n;

    int temp = n, divisor = 1;
    while (temp > 0) {
        divisor *= 10;
        temp /= 10;
    }

    int last_digits = sq % divisor;

    if (last_digits == n) {
        cout << n << " is an automorphic number." << endl;
    } else {
        cout << n << " is not an automorphic number." << endl;
    }

    return 0;
}

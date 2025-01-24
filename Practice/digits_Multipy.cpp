#include <iostream>
using namespace std;
int main()
{

    int Number;
    int n_Digit;
    cout << "Enter Number : ";
    cin >> Number;
    cout << "How Many Digits are in Number : ";
    cin >> n_Digit;
    int i = 1;
    int remainder;
    int multi = 1;
    while (i <= n_Digit)
    {
        remainder = Number % 10;
        multi = multi * remainder;
        Number = Number / 10;
        i++;
    }

    cout << "Number Multiplication is  : " << multi;

    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << " Enter a Number to check if it is divisible by 5 and 3 : ";
    cin >> number;
    if (number % 3 == 0 || number % 5 == 0)
    {
        cout << " Number is Divisible By 3 or 5 " << endl;
    }
    else
    {
        cout << " Number is Not Divisble by 3 or 5 " << endl;
    }

    return 0;
}
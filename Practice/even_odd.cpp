#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter Number : ";
    cin >> num;
    if (num > 0)
    {

        if (num != 0 && num % 2 == 0)
        {
            cout << "Even Number" << endl;
        }
        if (num != 0 && num % 2 != 0)
        {
            cout << "Odd Number " << endl;
        }
    }
    else
    {
        cout << "0 is Not Even Not Odd" << endl;
    }
    return 0;
}
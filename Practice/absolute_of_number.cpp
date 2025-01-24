/*Print the Absolute of a number
every number absolute is positve
|4|=4
|-4|=3
*/
#include <iostream>
using namespace std;
int main()
{
    int number;
    int absolute;
    cout << "Enter a Number : ";
    cin>>number;
    if (number < 0)
    {
        absolute = -1 * number;
    }
    else
    
        {
            absolute = number;
        }
    cout << "The Absolute of " << number << " is Equal to : " << absolute;
    return 0;
}
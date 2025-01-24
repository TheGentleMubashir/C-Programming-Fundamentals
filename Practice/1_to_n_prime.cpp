#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int start, end, num, count;

    cout << "Enter Starting Number: ";
    cin >> start;
    cout << "Enter Ending Number: ";
    cin >> end;

    for (num = start; num <= end; num++)
    {
        count = 0;
        
            if (num > 1)
        {
            for (int i = 2; i <= sqrt(num); i++)
            {
                if (num % i == 0)
                {
                    count++;
                    break; 
                }
            }
            if (count == 0)
            { 
                cout << num << endl;
            }
        }
    }

    return 0;
}
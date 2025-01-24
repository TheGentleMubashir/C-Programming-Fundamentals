#include <iostream>
using namespace std;
int main()
{
    int rows, col;
    cout << "Enter Rows : ";
    cin >> rows;
    cout << "Enter Col : ";
    cin >> col;
    int number_of_rows = rows;
    int number_of_col = col;
    int a[rows][col];
    for (int i = 0; i < number_of_rows; i++)
    {

        cout <<"------Row no : " << i + 1 <<endl;
        for (int j = 0; j < number_of_col; j++)
        {
            cout<< "Coloumn " << j + 1 << "  : ";
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < number_of_rows; i++)
    {

        for (int j = 0; j < number_of_col; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
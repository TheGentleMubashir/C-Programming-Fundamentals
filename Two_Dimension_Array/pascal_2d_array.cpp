#include <iostream>
using namespace std;
int fact(int n) {
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial = factorial * i;
    }
    return factorial;
}
int main()
{
 /*
 1
 11
 121
 1331
 14641
 */
 int row, col;
 cout << "Enter Number of Row : ";
 cin >> row;
 cout << "Enter Number of col : ";
 cin >> col;
 int arr[row][col];
for(int n=0;n<row;n++){
for (int r = 0; r < col; r++)
{
int n_factorial=fact(n);
int r_factorial=fact(r);
int n_minus_r=n-r;
int n_minus_r_factorial=fact(n_minus_r);
int value1=n_factorial/(r_factorial*(n_minus_r_factorial));
 arr[n][r]=value1;
}
}
for(int n=0;n<row;n++){
    for (int r = 0; r < col; r++)
    {
        if(arr[n][r]==0||n==0&&r==1);
       else cout<<arr[n][r]<<" ";
    }
    cout<<endl;
}
 return 0;
}
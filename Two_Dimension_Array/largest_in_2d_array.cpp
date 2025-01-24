#include<iostream>
using namespace std;
int main()
{
    int col,row;
    cout<<"Enter Number of Row : ";
    cin>>row;
    cout<<"Enter Number of Columns : ";
    cin>>col;

int two_d_array[row][col];
int largest=two_d_array[0][0];
for (int i = 0; i < row; i++){
    for (int j = 0; j<col; j++)
    {
        cout<<"Enter Element Row No "<<i+1<<" and Column No "<<j+1<<" : ";
        cin>>two_d_array[i][j];
    }
    

}
for (int i = 0; i < row; i++){
    largest=two_d_array[i][0];
    for (int j = 0; j<col; j++)
    {
        if (two_d_array[i][j]>largest)
        {
            largest=two_d_array[i][j];
        }
        cout<<"Largest  Element in Row "<<i+1<< " is "<<largest<<endl;
        
    }
    

}

 return 0;
}
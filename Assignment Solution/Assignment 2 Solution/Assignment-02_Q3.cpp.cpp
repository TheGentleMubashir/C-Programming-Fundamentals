#include<iostream>
using namespace std;
int main()
{

int daily_expense,Weeks_in_Month;
// Asking user to Give Daily Expense 
cout<<"Enter Daily Expense : ";
cin>>daily_expense;

// Asking User to Give Weeks in Month
cout<<"Enter Weeks in Month : ";
cin>>Weeks_in_Month;
// Calcualting Total Expenses =  daily expense * 7 * week per month
int total_Expenses=daily_expense*7*Weeks_in_Month;
// Output the Total Expenses in A Month
cout<<"Total Expenses in a Month are : "<<total_Expenses;

 return 0;
}
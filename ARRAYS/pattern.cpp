#include<iostream>
using namespace std;
int main()
{
int a=5;
for (int i = 1; i <a-1; i++)
{
    for (int j = i; j <a-1; j++)
    {
        if (i%j!=0)
        {
        cout<<"O M O O";
        }
        else if(i%j==0){
            cout<<"E M E E ";
        }
        cout<<endl;
    }
   
}

 return 0;
}
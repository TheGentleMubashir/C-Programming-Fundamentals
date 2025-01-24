#include<iostream>
using namespace std;
int main()
{
int size; 
cout<<"Enter size of Array : ";
cin>>size;
int array[size];
cout<<"Enter Number of Array : ";
for (int i = 0; i <size; i++)
{
cin>>array[i];
}
cout<<"Unsorted Array "<<endl;
for (int i = 0 ; i <size; i++)
{
  cout<<" "<<array[i];
}
int x=0;
int temp;
do{
    if(array[x]>array[x+1]){
     temp=array[x];
     array[x]=array[x+1];
     array[x+1]=temp;
     x=0;
    }
else{
    x++;
}
}while (x<=size);
    cout<<endl<<"sorted Array "<<endl;
for (int i = 0 ; i <size; i++)
{
  cout<<" "<<array[i];
}


 
 return 0;
}
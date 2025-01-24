#include<iostream>
using namespace std;
int main()
{
int size;
cout<<"Enter The Size of Array : ";
cin>>size;
int array[size];
cout<<"Enter The Array Elements : ";
for (int i = 0; i < size; i++)
{
    cin>>array[i];
}
cout<<"Your Array"<<endl;
for(int i=0;i<size;i++){
    cout<<" "<<array[i];
}
int i=0;
do{
    
if(size==1){
  break;
}
else if(array[i]<array[i+1]){
      int temp=array[i];
    array[i]=array[i+1];
    array[i+1]=temp;
    i=0;
}
else {
    i++;
}
}while(i<size-2);

cout<<endl<<"Descending Array"<<endl;
for(int i=0;i<size;i++){
    cout<<" "<<array[i];
}
 
 return 0;
}
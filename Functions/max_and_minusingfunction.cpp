#include<iostream>
using namespace std;
int max(int num[],int size){
    int max=num[0];
for (int  i = 0; i < size; i++)
{

        if(num[i]>max){
            max=num[i];
        }
    
}

    return max;
}
int min(int num[],int size){
    int min=num[0];
    for (int  i = 0; i < size; i++)
{
        if(num[i]<min){
            min=num[i];
    
    }
    }
    /*Enter Element 1 : 25
Enter Element 2 : 11
Enter Element 3 : 35
Enter Element 4 : 65
Enter Element 5 : 20*/
    return min;
}
int main()
{
    int size;
    cout<<"Enter the Size of Array : ";
    cin>>size;
int arr[size];
for(int i=0;i<size;i++){
    cout<<"Enter Element "<<i+1<<" : ";
    cin>>arr[i];
}
int maximumnumber=max(arr,size);
int minimumnumber=min(arr,size);
cout<<endl;
cout<<"Minimum value is: "<<minimumnumber<<endl;
cout<<"Maximum value is: "<<maximumnumber<<endl;
 return 0;
}
#include<iostream>
using namespace std;

void processarray(int *arr,int size,int*&ptr){
    for(int i=0;i<size;i++){
        *(arr+i)+=i*2;
    }
    ptr=arr+size/2+1;
    *ptr=(*ptr)*2+5;
}
void reassignpointer(int*&p1,int*&p2){
    p1=p2+2;
    *p2-=3;
    *p1=*p2+*(p1-1);
    p2+=2;
}

int main()
{
int arr[5]={10,20,30,40,50};
int *p1=nullptr;
int *p2=arr;
processarray(arr,5,p1);
reassignpointer(p1,p2);
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}

 return 0;
}

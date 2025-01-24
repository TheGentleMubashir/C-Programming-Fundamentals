#include<iostream>
using namespace std;
int main(){
float price,discount,discounted_price;
cout<<"Enter The Original Price Of Item : ";
cin>>price;
cout<<"Enter Dicount You Want : ";
cin>>discount;
discounted_price=price*(discount/100);

price-=discounted_price;
cout<<"The Price After Discount = "<<price<<" Rs"<<endl;
    return 0;
}
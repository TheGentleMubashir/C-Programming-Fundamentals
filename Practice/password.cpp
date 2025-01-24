#include<iostream>
using namespace std;
int main() {
    string name="SECURED";
    string input;
    bool istrue=1;
    for(int i=1;i<=3;i++){
        cout<<"Enter Pass : ";
        cin>>input;
        if(input==name or input == "secured"){
        istrue=1;
        break;
        }
        else{
            cout<<"Try Again"<<endl;
            istrue=0;
            }
    }
    if(istrue){
        cout<<"Correct Password"<<endl;
    }
    else{
        cout<<"Wrong Password"<<endl;
    }
    
    return 0;
}
/* Question No 7:
 Bank ATM Simulation (Nested if-else and switch)
 Write a program to simulate a bank ATM. The program should allow the user to:
 ● Deposit money
 ● Withdraw money
 ● Checkbalance
 Implement the following logic:
 ● Theuserhas to input a PIN number. If the PIN is incorrect after three attempts, block the
 account.
 ● Useaswitchstatement to perform different operations (Deposit, Withdraw, Check
 Balance).
● Usenested if-else to check the balance before withdrawal. The withdrawal amount
 cannot exceed the balance*/
 #include<iostream>
 using namespace std;
 int main()
 {
 char choice;
 int money;
 long int balance=450098;
 int define_pin=9860;
int user_pin;
cout<<"Enter Your Account Pin : ";
cin>>user_pin;
if(user_pin==define_pin){
goto Account;
}
else{
    cout<<"You Have 2 Attempt Left "<<endl;
    cout<<"Invalid Pin Please Try Again : ";
    cin>>user_pin;
    if(user_pin==define_pin){
goto Account;
}
else{
    cout<<"You Have 1 Attempt Left "<<endl;
    cout<<"Invalid Pin Please Try Again : ";
    cin>>user_pin;
}
if(user_pin==define_pin){
goto Account;
}
else{
cout<<"You Have Enter Wrong Password in All Three Attempt"<<endl;
cout<<"Your Account Has Been Blocked "<<endl;
return 0;
}
}
Account:
 cout<<"1. Desopsit Money (D,d)  "<<endl;
 cout<<"2. Withdraw Money (W,w) "<<endl;
 cout<<"3. Check Balance (B,b)  "<<endl;
 cin>>choice;
 switch (choice)
 {
 case 'D':
 case 'd':
 cout<<"Money Deposit Section "<<endl;
 cout<<"Enter Money You Want To Deposit into Your Bank Account : ";
 cin>>money;
 if(money>0){
     cout<<"Money Deposit SuccesFully "<<endl;
     balance=balance+money;
 }
 else{
    cout<<"Invalid Input "<<endl;
 }
 cout<<"Do You Want To Check Balance Charges 3 Rupees (Y/n) : ";
cin>>choice;
goto BALANCE;
    break;
     case 'W':
 case 'w':
 cout<<"Money Withdraw Section"<<endl;
 cout<<"Enter Money You want to Withdraw : ";
 cin>>money;
 if(money>0&&money<balance){
    balance=balance-money;
 }
 else{
    cout<<"Invalid Input "<<endl;
 }
 cout<<"Do You Want To Check Balance Charges 3 Rupees (Y/n) : ";
cin>>choice;
goto BALANCE;

    break;
     case 'B':
 case 'b':
 
cout<<"Do You Want To Check Balance Charges 3 Rupees (Y/n) : ";
cin>>choice;
BALANCE:
if(choice=='Y'||choice=='y'){
    balance=balance-3;
    cout<<"You Have " <<balance<<" Balance in Your Account "<<endl;
    goto FINALMESSEGE;
}
else{
   goto FINALMESSEGE;
}
    break;
 
 default:
 cout<<"Invalid Choice Entered "<<endl;
    break;
 }
  FINALMESSEGE:
 cout<<"Thank you for using HBL Bank Atm  Have a great day" << endl;

  return 0;
 }
/* Question No 9:
 Online Food Order System (Switch with Nested if-else) Create an online food order system.
 The user selects a food item and quantity, and the system calculates the total price. Food items
 include:
 ● Pizza: Rs. 500
 ● Burger: Rs. 200
 ● Sandwich: Rs. 100
 Use a switch statement to handle food selection. Inside each case, use nested if-else to
 check for special conditions:
 ● Fororders greater than Rs. 1000, apply a 10% discount.
 ● If the user orders more than 5 items of any type, apply a flat Rs. 100 discount.
 ● If the order is placed during peak hours (set by the user), apply a 15% surcharge on the
 total bill.*/
 #include<iostream>
 #include<ctime>
 #include<cstdlib>
 using namespace std;
 int main()
 { 
   
    // I dont know more about time library so i pick it up from website
    time_t now=time(0);
    tm *t = localtime(&now);
     int ttime=t->tm_hour;
    int PIZZA_PRICE=550,BURGER_PRICE=400,SANDWICH_PRICE=750;
    int PIZZA_COUNT=0,BURGER_COUNT=0,SANDWICH_COUNT=0;
    MENU:
 cout<<"***********************************************\n";
 cout<<"******Welcome To Online Food Order System******\n";
 cout<<"Our Today's Menu \n";
 cout<<"1.Pizza: "<<PIZZA_PRICE<<endl;
 cout<<"2.Burger: "<<BURGER_PRICE<<endl;
 cout<<"4.Sandwich: "<<SANDWICH_PRICE<<endl;
 int choice,quantity;
 char Confrim;
 cin>>choice;
 long int Bill=0;
 switch (choice)
 {
 case 1:
  PIZZA:
 cout<<"How Many Pizza Do You Want : ";
 cin>>quantity;
 cout<<"You Ordered "<<quantity<<" Pizza Can You Confirm (Y/N) : ";
cin>>Confrim;
if(Confrim=='Y'||Confrim=='y'){
     PIZZA_COUNT+=quantity;
         Bill=PIZZA_PRICE*quantity;
         goto TOTAL_BILL;
    if(quantity>5){
          Bill=PIZZA_PRICE*quantity;
        Bill-=100;
        PIZZA_COUNT+=quantity;
        goto TOTAL_BILL;
    }
}
   break;
 case 2:
 BURGERS:
  cout<<"How Many Burgers Do You Want : ";
 cin>>quantity;
 cout<<"You Ordered "<<quantity<<" Burgers Can You Confirm (Y/N) : ";
cin>>Confrim;
if(Confrim=='Y'||Confrim=='y'){
        BURGER_COUNT+=quantity;
         Bill=BURGER_PRICE*quantity;
         goto TOTAL_BILL;
    if(quantity>5){
        Bill=BURGER_PRICE*quantity;
        Bill-=100;
        BURGER_COUNT+=quantity;
        goto TOTAL_BILL;
    }}
 break;
 case 3:
 
cout<<"How Many Sandwich Do You Want : "; 
 cin>>quantity;
 cout<<"You Ordered "<<quantity<<" Sandwich Can You Confirm (Y/N) : ";
cin>>Confrim;
if(Confrim=='Y'||Confrim=='y'){
     SANDWICH_COUNT+=quantity;
         Bill= SANDWICH_PRICE*quantity;
         goto TOTAL_BILL;
    if(quantity>5){
        Bill= SANDWICH_PRICE*quantity;
        Bill-=100;
         SANDWICH_COUNT+=quantity;
         goto TOTAL_BILL;
    }
 break;

 default:
 cout<<"Invalid Choice Entered "<<endl;
    break;
 }}
TOTAL_BILL:
srand(time(0));
    int OrderNo=rand()%100;

int sucharges=0;
if(ttime>=19&&ttime<=22){// For 7pm To 10pm
    sucharges=Bill*0.15;
    Bill=Bill+sucharges;
}
if(Bill>1000){
    Bill*=0.9;
}
cout<<"Here is Your Bill Sir : "<<endl;
cout<<"Order No "<<OrderNo<<endl;
if(choice==1){
cout<<"PIZZA : "<<PIZZA_COUNT<<endl;
}
if(choice==2){
cout<<"BURGER : "<<BURGER_COUNT<<endl;
}
if(choice==3){
cout<<"SANDWICH : "<<SANDWICH_COUNT<<endl;
}
cout<<"SU CHARGES : "<<sucharges<<endl;
cout<<"Your BILL IS "<<Bill<<endl;
  return 0;
 }
/*Question No 6:
 Calculate Electricity Bill (Nested if-else)
 Write a program that calculates an electricity bill based on the following conditions using nested
 if-else:
 ● Forthe first 100 units: Rs. 5 per unit
 ● Forthe next 100 units: Rs. 7 per unit
 ● Forunits above 200: Rs. 10 per unit
 Take the number of units consumed as input from the user and calculate the total bill*/
 #include<iostream>
 using namespace std;
 int main()
 {
// Declared Variables for Handle Value of Unit and Bill and Initialized Bill with 0
 int unit_consumed,bill=0;
 // Prompt User To Give Unit Which Are Used
 cout<<"How Many Unit are Consumed : ";
 cin>>unit_consumed;
 // For The First 100 Unit 
 if(unit_consumed>=0&&unit_consumed<=100){
    // Calculate The bill If Units are Less Than 100 Units it Multiply Unit with 5 and add with Bill
    bill=bill+(unit_consumed*5);
 }
 //The Condition for Next 100 Unit
 else if(unit_consumed>100&&unit_consumed<=200){
    // Calculate the Bill if Units are greator Than 100 Units so 
    // it calculate that if we used 100 units mean 100 * 5= 500 so we
    // Subtract 100 Unit from Unitconsumed and add 500 for prevous 100 unit
    // and from onward the unit will multiply by 7
    bill=500+((unit_consumed-100)*7);
 }
 else if(unit_consumed>200){
    // Calculate the Bill if Units are greator Than 200 Units so 
    // it calculate that if we used 200 units mean 100 * 5= 500 and for another 100 
    // 100*7=700 
    // so we Subtract 200 Unit from Unitconsumed and add 500+700=1200 for prevous 200 unit
    // and from onward the unit will multiply by 10
    bill=500+700+((unit_consumed-200)*10);
 }
//Display The Bill With Units
  cout<<"You Have Consumed "<<unit_consumed<<" Units and Your Bill is  "<<bill;
  return 0;
 }
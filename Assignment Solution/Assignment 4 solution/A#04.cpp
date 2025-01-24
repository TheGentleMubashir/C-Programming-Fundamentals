#include<iostream>
#include<ctime>
#include<iomanip>
using namespace std;
int main()
{
    // Get THe Current Time In Seconds
    time_t now = std::time(nullptr);
    // Convert the current time second into local time
    // which contains human-readable components like year, month, day, etc.
    tm* localTime = std::localtime(&now);
   // tm_mday: Day of the month (1-31)
    int today_date=localTime->tm_mday;
    //tm_mon: Actually these are month but 11 so we had to add 1 to make it 12
    int month=localTime->tm_mon + 1;
  //  tm_year: it stores years since 1900 
  // if years is 2024 so we will get 2024-1900 we get 124 so we had to add 1900
  // to make it 2024   
    int year= localTime->tm_year + 1900;
// Show the current date to user at very top
cout<<"Date is "<<today_date<<"-"<<month<<"-"<<year<<endl;
cout<<"______Inventory Management System_______\n";
cout<<"________________Welcome_________________\n";
// we had given size=100 asuming that user will give the value under 100
int size=100;
// The Array to store the days to expire the batch 
int days_to_expiray[size];
// The Array to Store the Days of Expiry of The Batch
int BATCH[size];
// String to Store the Name of Product
string PRODUCTS[size];
// String to Store the Name of the Catagories
string CATOGORIES[size];
// The entry=0 will used as counter variable 
int  entry=0;
// Store The How Many Catagories will be.
int total_Number_of_Catagories;
//Prompt User to Enter THe Number of Catagories
cout<<"Enter The Total Number of Catogories : ";
cin>>total_Number_of_Catagories;
//The Outer and First Loop run the numberofcatagories time
for(int i=0;i<total_Number_of_Catagories;i++){
    //The String for current Name of catagory
    string name_of_catagorie;
    cout<<"Enter The Catagory "<<i+1<<" Name : ";
    cin>>name_of_catagorie;
    //Variable to store The Total Numbers of Product 
    int total_Number_of_products;
    // Asking from the use to enter The Total Numbers of Product 
    cout<<"Enter The Total Number of Products : ";
    cin>>total_Number_of_products;
    // The Loop Will Run total_Number_of_products time
    for(int j=0;j<total_Number_of_products;j++){
        //The String for current Name of Product
        string name_of_product;
        cout<<"Enter the Product "<<j+1<<" Name : ";
        cin>>name_of_product;
        int number_of_batchs;
        cout<<"Enter The Number of Batches for Product "<<j+1<<" in Catagory "<<i+1<<" : ";
        cin>>number_of_batchs;
        for(int k=0;k<number_of_batchs;k++){
            int the_expiry_day,the_expiry_month,the_expiry_year;
            
            cout<<"Enter The Expiry Date for Batch "<<k+1<<" of Product "<<j+1<<" in category "<<i+1<<endl;
            cout<<"Date : ";
            cin>>the_expiry_day;
            cout<<"Month : ";
            cin>>the_expiry_month;
            cout<<"Year : ";
            cin>>the_expiry_year;
            // Get The Year Like 2025-2024 = 1 year but it gives 1 we multipy with 365 to make it 1 year
            int absolute_year=(the_expiry_year-year)*365;
            // Get The Month like 12-11= 1 we multiply with 30 to make it 1 month
            int absolute_month=(the_expiry_month-month)*30;
            // The Day are same no problem with that
            int absolute_day=(the_expiry_day-today_date)*1;
            // Adding the year+month+day to get the Exact Expiring date
            int day_to_expire=absolute_day+absolute_month+absolute_year;
            // If expiry date is fininsed or 0 it will store -1 in array
            if(day_to_expire<=0){
                days_to_expiray[entry]=-1;
                } 
                // if Expiry date is greator than 0 store the total calculated days to expire the batch
                else{ days_to_expiray[entry]=day_to_expire;
                }
            BATCH[entry]=k+1;
            PRODUCTS[entry]=name_of_product;
            CATOGORIES[entry]=name_of_catagorie;
            entry++;
        }
    }
}
cout<<"_________________Load Out in Inventory______________\n";
for(int i=0;i<entry;i++){
    cout<<"\033[33m";
    cout<<"Catagory : "<<CATOGORIES[i]<<endl;
    cout<<"\tProduct : "<<PRODUCTS[i]<<endl;
    cout<<"\t\tBatch : "<<BATCH[i]<<" : ";
    if(days_to_expiray[i]==-1){
        cout<<"Expired"<<endl;
    }
  else if(days_to_expiray[i]>0&&days_to_expiray[i]<=5){
        cout<<"ALERT : Expiray Date Approaching in "<<days_to_expiray[i]<<" Days"<<endl;
    }
    else{
        cout<<days_to_expiray[i]<<" Days to Expiry \n";
        cout<<"Still Available for Sale\n";
    }
}
cout<<"\033[0m";
 return 0;
}
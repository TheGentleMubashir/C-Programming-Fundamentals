//Please Run this Code in Visual studio or Color Support Terminal For Colors Thanks
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
void guest_registration(string guest[], int &number_of_guest);
void generate_event_schedule();
void ticket_book();
void manage_seat_assingements(int seats[5][5]);
void view_seats_arrangements(int seats[5][5]);
void book_a_seat(int seats[5][5]);
int main()
{
cout<<"\033[36m**************************************\n";
cout<<"*       Programming Fundamental      *\n";
cout<<"*           Assignment No 5          *\n";
cout<<"*            Mubashir Ali             *\n";
cout<<"*             23K-6077               *\n";
cout<<"*              BSE-1C                *\n";
cout<<"**************************************\033[00m\n";
cout<<"\n\n";


const int max_guest=100;
string guest[max_guest];
int number_of_guest=0;
int  seats[5][5]={0};


int choice;
do
{ 
    cout<<"\033[34m=======Event Management System=======\033[0m\n\n";
    cout<<"\033[35m1. Register Guests \n";
    cout<<"2. Generate Event Schedule\n";
    cout<<"3. Book Tickets\n";
    cout<<"4. Manage Seat Assignments\n";
    cout<<"5. Exit\033[0m\n";
    cout<<"\033[34m====================================\033[0m\n";
    cout<<"\033[32mEnter Your Choice : \033[0m";
    cin>>choice;
    switch (choice)
    {
    case 1:
    guest_registration(guest,number_of_guest);
    break;
    case 2:
    generate_event_schedule();
    break;
    case 3:
    ticket_book();
    break;
    case 4:
    manage_seat_assingements(seats);
    break;
    case 5:
    cout<<"\033[33m Good Bye Exiting...\n"; 
    break;
    default:
    cout<<"Error Invalid Option\033[0m\n";
        break;
    }
} while (choice!=5);




 return 0;
}
void guest_registration(string guest[], int &number_of_guest){
    int new_guest;
    cout<<"\033[94mHow many Guest Do you Want to Register : \033[0m";
    cin>>new_guest;
    if (number_of_guest+new_guest>100)
    {
        cout<<"\033[31mSorry Capacity Exceed for New Guest\033[0m\n";
        return;
    }
    for (int i = 0; i < new_guest; i++)
    {
        cout<<"\033[92mEnter The Name of The Guest "<<i+1<<" : \033[0m";
        cin>>ws;// This will clear the whitespace issue
        getline(cin,guest[number_of_guest]);// This will Read Input with spaces
        number_of_guest++;
    }
    cout<<"\033[95mGuests Registered Successfully \n";
    cout<<"Registered Guest : \033[95m\n";
    for (int i = 0; i < number_of_guest; i++)
    {
        cout<<"\033[92m "<<i+1<<". "<<guest[i]<<" \033[0m\n";
    }
}
void generate_event_schedule(){
cout<<"\033[33m======Event Schedule========\n\n";
    cout<<"6:00 PM - Welcome Speech\n\n";
    cout<<"6:30 PM - Dinner Begins\n\n";
    cout<<"7:30 PM - Musical Performance\n\n";
    cout<<"8:30 PM - Closing Ceremony\n\n";
    cout<<"=============================\033[0m\n\n";
}
void ticket_book(){
    int booker;
    float price=50;
    cout<<"\033[31mEnter The Number of Tickets to Book : \033[0m";
    cin>>booker;
    price*=booker;
    cout<<"\033[35mTotal Price of For \033[0m"<<booker<<"\033[36m tickets :\033[0m $ "<<price<<endl;
}
void manage_seat_assingements(int seats[5][5]){
int choice;
do{
    cout<<"\033[92m======Manage Seat Assignments========\n";
    cout<<"1. View Seating Arrangement\n";
    cout<<"2. Book a Seat\n";
    cout<<"3. Return to Main Menu\n";
    cout<<"======================================\033[0m\n";
    cout<<"\033[94mEnter Your Choice : \033[0m";
    cin>>choice;
switch(choice)
{
case 1:
view_seats_arrangements(seats);
break;
case 2:
book_a_seat(seats);
break;
case 3:
cout<<"\033[32mReturning To The Main Menu \033[0m\n";
break;
default:
cout<<"\033[31mInvalid Input Please Try Aain \033[0m\n";
    break;
}
}while (choice!=3);
}
void view_seats_arrangements(int seats[5][5]){
    cout<<"\033[32mSeating Arrangment 0 means Empty and 1 means Occupied\033[0m\n";
    for (int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++){
        cout<<"\033[36m "<<seats[i][j]<<" \033[0m";
        }
        cout<<endl;
    }
    
}
void book_a_seat(int seats[5][5]){
    int row,col;
    cout<<"\033[35mEnter row (0-4) : \033[0m";
    cin>>row;
    cout<<"\033[35mEnter column (0-4) : \033[0m";
    cin>>col;
    if(row<0||row>=5||col<0||col>=5){
        cout<<"\033[31mInvalid Seats Position \n Please Try Again\033[0m\n";
    }
    else if(seats[row][col]==1){
        cout<<"\033[31mSorry Sir Seats has Been Already Booked\033[0m\n";
    }
    else{
        seats[row][col]=1;
        cout<<"\033[35mYour Seat has been Successfully Booked\033[0m\n";
    }

}
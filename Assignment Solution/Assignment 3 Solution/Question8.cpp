/* Question No 8:
 Marksheet with Subject-Wise Conditions (Nested if-else) Create a program that generates a
 detailed mark sheet for a student. Input marks for five subjects. Use nested if-else
 statements to check the following conditions:
 ● If the student fails any subject (marks less than 40), display "Failed".
 ● If the total percentage is greater than or equal to 75, display "Distinction".
 ● If the percentage is between 60 and 75, display "First Division".
 ● If the percentage is between 50 and 60, display "Second Division".
 ● If the percentage is between 40 and 50, display "Third Division".
 ● Also, if the student fails in 2 or more subjects, display "Repeat the Year".*/
 #include<iostream>
 using namespace std;
 #define PASS 40
 int main()
 {
    int s1,s2,s3,s4,s5;
    int failedcount=0;
    int percentange,subject=5;
    cout<<"Enter Your Math Marks : ";
    cin>>s1;
    cout<<"Enter Your English Marks : ";
    cin>>s2;
    cout<<"Enter Your Urdu Marks : ";
    cin>>s3;
    cout<<"Enter Your Physics Marks : ";
    cin>>s4;
    cout<<"Enter Your Chemistry Marks : ";
    cin>>s5;
   if(s1<PASS){
    cout<<"Failed in Math \n";
    failedcount++;
   }
   if(s2<PASS){
    cout<<"Failed in English \n";
    failedcount++;
   }
   if(s3<PASS){
    cout<<"Failed in Urdu \n";
    failedcount++;
   }
   if(s4<PASS){
    cout<<"Failed in Physics \n";
    failedcount++;
   }
   if(s5<PASS){
    cout<<"Failed in Chemistry\n";
    failedcount++;
   }
   if(failedcount>=2){
    cout<<"Repeat The Year \n";
    return 0;
   }
   else{
    percentange=(s1+s2+s3+s4+s5)/subject;
    cout<<"You Have Achieved  "<<percentange<<"%% in Second Year\n";
    if(percentange>=75){
        cout<<"Distinction\n";
    }
    else if(percentange>=65&&percentange<75){
        cout<<"First Division \n";
    }
    else if(percentange>=50&&percentange<60){
        cout<<"Second Division\n";
    }
    else if(percentange>=40&&percentange<50){
        cout<<"Third  Division \n";
    }
    else {
    cout<<"Failed! Repeat The Year \n";
    }
   }

  return 0;
 }
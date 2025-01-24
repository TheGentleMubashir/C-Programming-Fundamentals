/* Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function.
Expected Output :

 The sum of the series is : 34 */
 #include<iostream>
 using namespace std;
 int factorial(int num){
    if(num==1) return num;
    return num*factorial(num-1);
 }
void series(int number){
     int sum=0;

for (int i = 1; i<=number; i++)
{
   sum+=factorial(i)/i;
}
cout<<"Sum of Series is : "<<sum;
 }
 int main()
 {
 int number ;
 cout<<"Enter The Number : ";
 cin>>number;
series(number);
  return 0;
 }
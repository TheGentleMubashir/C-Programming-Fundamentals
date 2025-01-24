#include<iostream>
using namespace std;
int string_equal(string str1,string str2){

if (str1.length()==str2.length()){
    return 1;
}
return 0;
}
string aceding(string &first,string &second){
    for (int i = 0;first[i]!='\0'; i++)
    {
        for(int j=i+1;first[j]!='\0';j++){
        if(first[i]>first[j]){
            char temp=first[i];
            first[i]=first[j];
            first[j]=temp;
        }
        }
    }
     for (int i = 0;second[i]!='\0'; i++)
    {
        for(int j=i+1;second[j]!='\0';j++){
        if(second[i]>second[j]){
            char temp=second[i];
            second[i]=second[j];
            second[j]=temp;
        }
        }
    }
}
bool anagram(string str1,string str2){

    for (int i = 0; i < str1.length(); i++)
    {
        
        for (int j = 0; j <str2.length(); j++)
        {
         if(str1[i]==str2[j]){
            
         }
        }
        
    }
    

}
int main()
{
    string string1,string2;

    cout<<"Enter The First String : ";
    cin>>string1;
    cout<<"Enter The Second String : ";
    cin>>string2;
    string copy_string1=string1,copy_string2=string2;
    if(string_equal(string1,string2)){
    aceding(string1,string2);
    if (string1==string2)
    {
        cout<<"The "<<copy_string1<<" and "<<copy_string2<<" Are Anagram "<<endl;
    }
    }
    else {
        cout<<"The Both Strings Length is Not Equal\n";
    }
 return 0;
}
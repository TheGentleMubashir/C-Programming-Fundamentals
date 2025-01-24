    /* Question No 3:
    Check for Vowel or Consonant (Switch Statement)
    Write a program that takes a character as input and uses a switch statement to check if it is a
    vowel (a, e, i, o, u) or a consonant.*/
    #include<iostream>
    using namespace std;
    int main()
    {
    char input;
    cout<<"Enter a Character : ";
    cin>>input;
    // Checking the number is Character or Not 
    if((input>='A'&&input<='Z')||(input>='a'&&input<='z')){

    switch (input)
    {
    // For Vowel Letter i mentioned the possible cases for it 
    case 'A':case 'a':
    cout<<"Vowel Letter \n";
        break;
    case 'E':case 'e':
    cout<<"Vowel Letter \n";
        break;
        case 'I':case 'i':
    cout<<"Vowel Letter \n";
        break;
        case 'O':case 'o':
    cout<<"Vowel Letter \n";
        break;
        case 'U':case 'u':
    cout<<"Vowel Letter \n";
        break;
    //if The none of Vowel Get Correct The Defualt Will Run Becease other than vowel are consonant
    default:
    cout<<"Consonant Letter\n";
        break;
    }
    }
    else{
        cout<<"Invalid Input Please Enter a Letter \n";
    }
    return 0;
    }
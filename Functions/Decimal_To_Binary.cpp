#include <iostream>
using namespace std;

int main() {
    int decimal;
    cout<<"Enter a decimal number: ";
    cin>>decimal;
    int binary=0;
    int power=1; 
    while (decimal > 0) {
        int remainder = decimal % 2;   
        binary += remainder *power;   
        decimal /= 2;                             
            power++;
             }

    cout << "Binary: " << binary << endl;
    return 0;
}

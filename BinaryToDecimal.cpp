#include<iostream>
#include<cmath>
using namespace std;
// function to Convert Binary to decimal
int binaryToDecimal(int n){
    int decimal =0;
    int i = 0;
    while(n>0){
        int bit = n% 10; // get the last bit of n
        decimal = decimal + bit * pow (2 , i++); // add the bit to the decimal number
        n = n / 10; // remove the last bit from n

    }
    return decimal; // return the decimal number
}
int binaryToDecimalBitWise(int n){
    int decimal =0;
    int i = 0;
    while(n > 0){
        int bit = n & 1; // get the last bit of n
        decimal = decimal + bit * pow (2 , i++); // add the bit to the decimal number
        n = n >> 1 ; // remove the last bit from n

    }
    return decimal; // return the decimal number
}
int main(){
    int n;
    cout<<"Enter a Binary Number: ";
    cin>>n; // input binary number
    int decimalNumber = binaryToDecimal(n); // call the function to convert binary to decimal
    int decimalNumberBitwise = binaryToDecimalBitWise(n); // call the function to convert binary to decimal
    cout<<"The decimal bitwise representation of "<<n<<" is: "<<decimalNumberBitwise<<endl; // output the decimal number
    cout<<"The decimal  representation of "<<n<<" is: "<<decimalNumber<<endl; // output the decimal number
    return 0;
}
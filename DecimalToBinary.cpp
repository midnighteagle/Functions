#include<iostream>
#include<cmath>
using namespace std;
// Function to convert decimal to binary.
int decimalToBinary(int n){
// DIVISION METHOD 
    int binaryNumber = 0; // to store the binary number
    int i = 0;
    while(n>0){ // loop until n become 0
        int bit = n%2;
        binaryNumber = bit * pow(10,i++)+binaryNumber; // add the bit to the binary number
        n = n/2; // update n}
    }
    return binaryNumber; // return the binary number
}
// Bitwise method
int decimalToBinaryBitwise(int n){
    int binaryNumber = 0; // to store the binary number
    int i = 0;
    while(n>0){ // loop until n become 0
        int bit = n & 1; // get the last bit of n using bitwise AND operator
        binaryNumber = bit * pow(10,i++)+binaryNumber; // add the bit to the binary number
        n = n>>1; // right shift n by 1 to remove the last bit
    }
    return binaryNumber; // return the binary number
}
int main(){
    int n;
    cout<<"Enter a decimal number: ";
    cin>>n; // input decimal number
    int binaryNumber = decimalToBinary(n); // call the function to convert decimal to binary
    int binaryNumberBitwise = decimalToBinary(n); // call the function to convert decimal to binary
    cout<<"The binary representation of "<<n<<" is: "<<binaryNumber<<endl; // output the binary number
    cout<<"The binary representation of by BitWise "<<n<<" is: "<<binaryNumberBitwise<<endl; // output the binary number
    return 0;
}
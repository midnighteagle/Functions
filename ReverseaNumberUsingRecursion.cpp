#include<iostream>
using namespace std;
// Function to reverse a number.
int reverseNumber(int n){
    int lastDigit = n%10; // get the last digit of n
    if(n<10){ // base case when n is a single digit number
        return lastDigit; // return the last digit
    }
    else{
        // recursive case
        cout<<lastDigit; // print the last digit
        return reverseNumber(n/10); // call the function again with n/10
    }

}
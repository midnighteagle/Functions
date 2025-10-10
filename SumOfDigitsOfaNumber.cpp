#include<iostream>
using namespace std;
// function to calculate the sum of the Number's digits
int sumOfDigits(int n){
    int sum = 0;
    while(n >  0){
        int b = n % 10; // get the last digit of n
        sum = sum + b; // add the last digit to sum
        n = n / 10; // remove the last digit from n 
    } 
    return sum;
}
int main(){
    int n ;
    cout<< "Enter a number to fimd the sum of its digits: ";
    cin>>n;
    int result = sumOfDigits(n);
    cout<<"The sum of digits of "<< n <<" is "<< result << endl;
    return 0;
}
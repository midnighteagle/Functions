#include<iostream>
#include<cmath>
using namespace std;
// Function to calculate SIP amount.
double CalculateSIP(double p, double r, int n){
    double R = (r / 12.0 )/100.0; // convert annual rate to monthly and percentage to decimal
    double P = p * ((pow(1 + R, n) -1) / R) * (1 + R); // calculate SIP amount using the formula
    return P; // return the calculated SIP amount
}
int main(){
    double p , r; 
    int n;
    cout<<"Enter the monthly Investment amount: ";
    cin>>p; // input monthly investment amount
    cout<<"Enter the annual rate of interest: ";
    cin>>r; // input annual rate of interest.
    cout<<"Enter the number of months: ";
    cin>>n; // input number of months
    double sipAmount = CalculateSIP(p, r, n); // call the function to calculate SIP amount
    cout<<"The SIP amount after "<<n<<" months is: "<<sipAmount<<endl; // output the SIP amount
    return 0;
}

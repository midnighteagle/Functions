#include<iostream>
using namespace std;
// Function to Find the simple Intrest
float SimpleIntrest(float principal, float rate, float time){
    float SI = (principal * rate * time) / 100;
    return SI;
}

int main(){
    float principal;
    float rate;
    float time;
    cout<<" Enter the principal amount: ";
    cin>>principal;
    cout<<"Enter the rate of intrest: ";
    cin>>rate;
    cout<<"Enter the time in Years: ";
    cin>>time;
    float intrest = SimpleIntrest(principal, rate , time);
    cout<<"The simple intrest is: "<< intrest <<endl;
    return 0;
}
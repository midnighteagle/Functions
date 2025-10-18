#include<iostream>
#include<vector>
using namespace std;
int NumberUsingDigits(int NoTurns){
    int number = 0;
    int digit;
    for(int i = 0; i < NoTurns; i++){
        cout<<"Enter the "<<i + 1<<" digits: ";
        cin>> digit;
        number = number * 10 + digit;
    }
    return number;
}
int main(){
    int NoTurns;
    cout<<"Enter the number of turns: ";
    cin>>NoTurns;
    
    
    int result = NumberUsingDigits(NoTurns);
    cout<< "Number made by total Digits: "<<result<<endl;

    return 0;
}
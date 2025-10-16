#include<iostream>
using namespace std;
int CalculatePower(int a, int b){
    int ans =1;
    // a to the power v => a*a*a.......b times
    for(int i = 0; i < b; i++){
        ans = ans*a;
    }
    return ans;
}
int main(){
    int a; int b;
    cout<<"Enter the value of Base Number : ";
    cin>>a;
    cout<<"Enter the value of power: ";
    cin>>b;
    int result = CalculatePower(a,b);
    cout<< " the value of the number: "<<result<<endl;
    return 0;
}
#include<iostream>
using namespace std;
bool cheakPrime(int n){
    int i = 2;
    for(i = 2; i<n; i++){
        if(n % i == 0){
            return false;
        }
        
    }
    return true;
}
int main(){
    int n; 
    cout<<"Enter the number: "<<endl;
    cin>>n;
    bool isPrime = cheakPrime(n);
    if(isPrime){
        cout<< n <<" 2is a Prime Number"<<endl;
    }
    else{
        cout<< n <<" Is not Prime number"<<endl;
    }
    return 0;
}
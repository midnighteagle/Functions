#include<iostream>
using namespace std;
bool cheackOddEven(int n){
    if((n & 1) ==0){

        return true;
    }
    return false;
    
}   
int main(){
    int n;
    cout<<"Enter the number:  "<<endl;
    cin>>n;
    bool number = cheackOddEven(n);
    if(number){
        cout<<n<<" is the even number: "<<endl;
    }
    else{
        cout<<n<<" it is Odd number: "<<endl;
    }
    return 0;
}
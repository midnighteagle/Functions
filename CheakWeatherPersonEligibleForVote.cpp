#include<iostream>
using namespace std;
// function to check weather a person is eligible for vote or not
bool isEligibleForVote(int age){
    if(age>=18){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(isEligibleForVote(age)){
        cout<<"You are eligible for vote"<<endl;
    }
    else{
        cout<<"You are not eligible for vote"<<endl;
    }
    return 0;
}
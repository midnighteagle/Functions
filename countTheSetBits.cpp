#include<iostream>
using namespace std;
int CountSetbits(int n){
    int count = 0;
    while(n>0){

        int bits = n % 2;
        if( bits==1 ){
            count++;
        }
        n = n / 2;
    }
    return count;
}
int CountSetbitsUsingBitwise(int n){
    int count = 0;
    while(n>0){

        int bits = n & 1;
        if( bits==1 ){
            count++;
        }
        n = n >> 1;
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int setbits = CountSetbits(n);
    cout<<"The number of setbits are: "<< setbits <<endl;
    int setbitsBitwise = CountSetbitsUsingBitwise(n);
    cout<<"The number of setbits are: "<< setbitsBitwise <<endl;
    return 0;
}
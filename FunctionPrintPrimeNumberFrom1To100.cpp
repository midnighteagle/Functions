#include<iostream>
using namespace std;
// Function to Print Prime Number From 1 to 100
// void PrintPrimeNumberFrom1To100(){
//     for(int num = 2; num <= 100; num++){
//         if(num%1==0 && num%num==0){
//             cout<<num<<endl;
//         }
//     }
// }

// Function to Print Prime Number From 1 to 100
void PrintPrimeNumberFrom1To100(){
    int i =2;
    while(i<=100){
        if(i%1==0 && i%i==0){
            cout<<i<<endl;
        }
        i++;
    }
    
}
int main(){
    PrintPrimeNumberFrom1To100();

    return 0;
}
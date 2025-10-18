#include<iostream>
using namespace std;
int AllDigitsOfNumber(int n){
    int num = 0;
    int count = 0;
    cout<<"Digits are : ";
    while(n>0){
        num = n % 10;
        count++;
        cout << num<<", "; 
        n = n / 10;
    }
    return count;

}
int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    int allDigits = AllDigitsOfNumber(n);
    cout <<endl<< "The all Digits of the number : "<< allDigits <<endl;
    return 0;
}
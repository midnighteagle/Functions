#include<iostream>
using namespace std;
void Table(int n){
    for(int i = 1; i <= 10; i++){
        cout<<n<< " X "<< i<<" = "<<n*i<<endl;;
    }
}
int main(){
    int n;
    cout<<"Enter the Number: "<<endl;
    cin>>n;
    Table(n);
    return 0;
}
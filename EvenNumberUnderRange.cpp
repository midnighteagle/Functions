#include<iostream>
using namespace std;
void EvenNumberUnderRange(int a, int b){
    int evenCount = 0;
    for(int i =a; i <= b; i++){
        if ((i & 1 ) == 0){
            cout<<i<<",";
            evenCount++;
        }
        
    }
    cout<<endl<<"the total number of even "<<evenCount<<endl;
}
int main(){
    int a; int b;
    cout<<"Enter the starting number: "<<endl;
    cin>>a;
    cout<<"Enter the Ending number: "<<endl;
    cin>>b;
    EvenNumberUnderRange(a,b);
    return 0;
}
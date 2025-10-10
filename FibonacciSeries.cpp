#include<iostream>
using namespace std;
// Function to print Fabinacci series up to n series.
void fibonacciSeries (int n){
    int t1 = 0, t2 = 1, nextTerm = 0;
    cout<<"Fabonacci series: "<<endl;
    // here the loop will run untill n terms
    for(int i = 1 ; i<= n ; i++){
        if (i==1){
            cout<<t1<<endl;
            continue;
        }
        if (i==2){
            cout<<t2<<endl;
            continue;
        }
        nextTerm = t1 + t2; // next term is the sum of previous two terms
        t1 = t2; // update the value of t1 and t2
        t2 = nextTerm; // update the value of t1 and t2.
        cout<< nextTerm <<endl;

    }
}
int main(){
    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;
    fibonacciSeries(n);
    return 0;
}
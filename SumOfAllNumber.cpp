#include<iostream>
using namespace std;
int SumOfAllNumber(int a, int n, int l){
    // a = the first number
    // n = the number of terms
    // l = the last number
    int sum = ((n)*(a+l))/2;
    return sum;
}
int main(){
    int a;
    int n;
    int l;
    cout<<"Enter the First term : "<<endl;
    cin>>a;
    cout<<"Enter the Number of Term: "<<endl;
    cin>>n;
    cout<<"Enter the last term: "<<endl;
    cin>>l;
    int ans = SumOfAllNumber(a,n,l);
    cout<<"the total of the series " << ans<<endl;
    return 0;
}
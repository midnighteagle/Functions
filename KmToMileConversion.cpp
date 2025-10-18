#include<iostream>
using namespace std;
int KmToMileConversion(int km){
    int mile = km * 0.621371;
    return mile;
}
int main(){
    float km;
    cout<<"Enter distance in kilometers: ";
    cin>>km;
    int mile = KmToMileConversion(km);
    cout<<"Distance in miles: "<<mile<<endl;
    return 0;
}
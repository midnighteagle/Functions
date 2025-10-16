#include<iostream>
using namespace std;
void PercentageMarks(int Hindi,int English,int SST,int Science,int GenralKnowlwdge,int Computer){
    int Sum = Hindi + English + SST + Science + GenralKnowlwdge + Computer;
    int Totalmarks = 600;
    double percentage = (Sum/(double)Totalmarks)*100;
    cout<<"Your total Percentage = "<<percentage<<endl;
}
int main(){
    int Hindi;
    int English;
    int SST;
    int Science;
    int GenralKnowlwdge;
    int Computer;
    cout<<"Enter the marks of Hindi: ";
    cin>>Hindi;
    cout<<"Enter the marks of English: ";
    cin>>English;
    cout<<"Enter the marks of SST: ";
    cin>>SST;
    cout<<"Enter the marks of Science: ";
    cin>>Science;
    cout<<"Enter the marks of General Knowledge: ";
    cin>>GenralKnowlwdge;
    cout<<"Enter the marks of Computer: ";
    cin>>Computer;
    PercentageMarks(Hindi,English,SST,Science,GenralKnowlwdge,Computer);
    
    return 0;
}
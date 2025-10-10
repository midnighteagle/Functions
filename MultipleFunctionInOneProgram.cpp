#include<iostream>
using namespace std;
// Function to multiply three numbers
int GetMultiplication(int a, int b, int c){
    int result = a * b * c;
    return result;
}
// Function to convert Fahrenheit to Celsius
int ConvertFahrenheitToCelsius(int fahrenheit){
    int celsius = (fahrenheit - 32) * 5/9;
    return celsius;
}
// Function to print name 10 times
void printMyname(){
    for(int i = 0; i<10; i++){
        cout<<"My name is akshat arya"<<endl;

    }
}
// Function to print multiplication table of a number
void table(int num){
    for (int i = 1; i <= 10; i++){
        cout<<num<<" * "<<i<<" = "<<num*i<<endl;
    }
}
// Function to convert lowercase character to uppercase
char ConvertToUppercase(char ch){
    char uppercase = ch - 'a' + 'A';
    return uppercase;
}



int main(){
    // Multiplication of three numbers
    int a; 
    int b;
    int c;
    cout<<"Enter the first number: "<<endl;
    cin>>a;
    cout<<"Enter the second number: "<<endl;
    cin>>b;
    cout<<"Enter the third number: "<<endl;
    cin>>c;
    int ans = GetMultiplication(a,b,c);
    cout<<"The multiplication of two number is: "<<ans<<endl;

    
    

// Convert Fahrenheit to Celsius
    int fehrenheit;
    cout<<"Enter the temperature in fahrenheit: ";
    cin>>fehrenheit;
    int celsius = ConvertFahrenheitToCelsius(fehrenheit);
    cout<<"The temperature in celsius is: "<<celsius<<endl;
// Print multiplication table of a number
    int num;
    cout<<"Enter the number to print its table: ";
    cin>>num;
    table(num);


// Convert lowercase character to uppercase
    char ch; 
    cout<<"Enter a lowercase character: ";
    cin>>ch;
    char uppercase = ConvertToUppercase(ch);
    cout<<"The uppercase character is: "<<uppercase<<endl;

// Print name 10 times
    printMyname();
    
    return 0;
}
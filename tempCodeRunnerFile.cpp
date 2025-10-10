void PrintPrimeNumberFrom1To100(){
    for(int num = 2; num <= 100; num++){
        if(num%1==0 && num%num==0){
            cout<<num<<endl;
        }
    }
}
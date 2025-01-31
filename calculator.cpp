//building a simple calculator
#include<iostream>
#include<string.h>
using namespace std;



int main(){


    int a,b;
    char op;
    
    cout<<"Enter numbers to perform operations";
    cin>>a>>op>>b;
    
    
    switch(op){

        case '+':cout<<(a+b) <<endl;
                 break;
             
        case '-':cout<<(a-b)<<endl;
                 break;
        case '*':cout<<a*b<<endl;
                 break;
        case '/':cout<<a/b<<endl;
                 break;

    }

    return 0;

     










}
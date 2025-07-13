#include<iostream>
using namespace std;
int main()
{
    char op;
    int a,b;
    cout<<"Enter the value of a and b : "<<endl;
    cin>>a>>b;
    cout<<"Enter the operator (+,-,*,/,%) : ";
    cin>>op;
    switch(op){
        case '+':
        cout<<a<<op<<b<<"="<<a+b<<endl;
        break;
        case '-':
        cout<<a<<op<<b<<"="<<a-b<<endl;
        break;
        case '*':
        cout<<a<<op<<b<<"="<<a*b<<endl;
        break;
        case '/':
        cout<<a<<op<<b<<"="<<a/b<<endl;
        break;
        case '%':
        cout<<a<<op<<b<<"="<<a%b<<endl;
        break;
        default:
        cout<<"Invalid";
    }
    
 return 0;
}
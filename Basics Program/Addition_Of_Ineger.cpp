#include<iostream>
using  namespace std;
int main()
{
    int num1, num2, result;  

    cout<<"Enter First Integer Value :"<<endl; // endl (end of line)  use to go new line (\n and <<endl are similer)
    cin>>num1;
    cout<<" Enter Second Integer Value :"<<endl; 
    cin>>num2;

    result = num1 + num2;    // sume of two integer values in store result variable

    cout<<"Addition of two integers : "<<result;  // <<result user for print value 

    return 0;
}
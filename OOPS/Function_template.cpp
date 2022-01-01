#include<iostream>
using namespace std;

template <class X>   // x is a place holder to contint all datatypes values.
X compare(X a, X y)   // semicolon not put because template and function line is single line ...
{
    if(a>y)
    return (a);
    else
    return (y);
}
int main(){

    cout<<"B is greater than A "<<compare(12,34)<<endl;  
    cout<<"A is greater than A "<<compare(23, 2)<<endl;

    return 0;
}
// function template are called as generic function.......
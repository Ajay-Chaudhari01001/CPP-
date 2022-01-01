// w.a.p. print sum of digits..
#include <iostream>
using namespace std;
 
int main()
{
    int num, sum=0, digit;

    cout<<"Enter any number: "<<endl;
    cin>>num;
 
    while(num>0)
     {
        digit = num%10;
        sum += digit;
        num = num/10;
     }
 
    //Print sum of digit
    cout<<"Sum of digits: "<< sum;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int no,flag=0;
    cout<<"Enter a Number :";
    cin>>no;
    //check prime or not using for loop
    for(int i=2;i<no;i++)
    {
        if(no%i==0)
        {
        flag =1;
        cout<<"Number are Not Prime Number :";
        break;
        }
    }

    if(flag==0)
    cout<<"Number is prime number";
    return 0;
}

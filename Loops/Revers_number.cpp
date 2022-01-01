#include<iostream>
using namespace std;
int main()
{
    int no,rem,rev=0;
    cout<<"Enter Any Number :";
    cin>>no;

    //reverse number
    while(no>0)
    {
        rem = no%10;
        rev = rev*10+rem;
        no = no/10;
    }

    cout<<no<<"\n Reverse Number Is"<<rev;
   
   return 0;
}
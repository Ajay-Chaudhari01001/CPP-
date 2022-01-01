#include<iostream>
using namespace std;
int main()
{
    int no,rem,rev=0,temp;
    cout<<"Enter Any Number :";
    cin>>no;
    temp = no;
    //reverse number
    while(no>0)
    {
        rem = no%10;
        rev = rev*10+rem;
        no = no/10;
    }
    if(temp == rev)
    cout<<temp<<" Number Is Palindrome Number :";
    else
    cout<<temp<<" Number Is Not Palindrome Number :";
   
   return 0;
}
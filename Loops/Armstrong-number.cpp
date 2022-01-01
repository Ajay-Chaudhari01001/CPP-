#include<iostream>
using namespace std;
int main()
{
    int no,rem,sum=0,temp;
    cout<<"Enter Any Number :";
    cin>>no;
    temp = no;
    //reverse number
    while(no>0)
    {
        rem = no%10;
        sum = sum+(rem*rem*rem);
        no = no/10;
    }
    if(temp == sum)
    cout<<temp<<" Number Is ArmStrong Number :";
    else
    cout<<temp<<" Number Is Not ArmStrong Number :";
   
   return 0;
}
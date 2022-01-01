#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter The Age :";
    cin>>age;

    if(age>=18)   // check condition 
    {
        cout<<"You Are Eligible For Voting ";  // when condion is true then execute if block
    }
    else
    {
        cout<<"You Are NOt Eligible For Voting "; // and when condition are false then execute else block
    }
    return 0;
}
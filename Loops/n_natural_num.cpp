// w.a.p. to print n natural numbers in reverse order.
#include <iostream>
using namespace std;
 
int main()
{
    int num=0, i;
 
   //Reading number
    cout<<"Enter any number: "<<endl;
    cin>>num;
    for(i=num; i>=1; i--)
    {
        cout<<i;
    }
    return 0;
 
}
#include<iostream>
using namespace std;

int main()
{
    int n, i=1;
    cout<<" Enter Row Of Number..."<<endl;
    cin>>n;
    while(i<=n)
    {
        int j = 1;
        while(j<=i)
        {
            cout<<"*";
            j++;
        }
        cout<<"\n";
        i++;
    }
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int n, i=1, count=65;
    cout<<" Enter Row Of Number..."<<endl;
    cin>>n;
    while(i<=n)
    {
        int j = 1;
        while(j<=n)
        {
            cout<<(char)count<<" ";   // using type casting of variable...
             count++;
            j++;
        }
        cout<<"\n";
        i++;
    }
    return 0;
}
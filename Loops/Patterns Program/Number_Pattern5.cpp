#include<iostream>
using namespace std;

int main()
{
    int n, i=1, count=1;
    cout<<" Enter R ow Of Number..."<<endl;
    cin>>n;
    while(i<=n)
    {
        int j = 1;
        while(j<=i)
        {
            cout<<count<<" ";
            j++;
        }
        cout<<"\n";
         count++;
        i++;
    }
    return 0;
}
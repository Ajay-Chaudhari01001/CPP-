#include<iostream>
using namespace std;

class Default
{
    public:
    int add(int a=3, int b=5, int c=2, int d=5)
    {
        return(a+b+c+d);
    }
};
int main()
{
    Default d;
    int n1,n2,n3,n4;
    cout<<"Enter any four numbers :"<<endl;
    cin>>n1>>n2>>n3>>n4;

    cout<<"No default arguments :"<<d.add(n1,n2,n3,n4)<<endl;
    cout<<"No 1 default arguments :"<<d.add(n1,n2,n3)<<endl;
    cout<<"No 2 default arguments :"<<d.add(n1,n2)<<endl;
    cout<<"No 3 default arguments :"<<d.add(n1)<<endl;

    return 0;

}
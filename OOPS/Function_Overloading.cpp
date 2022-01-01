#include<iostream>
using namespace std;

class Addition
{
    int intresult;
    float floatresult;
    public:
    void add(int a, int b)   // same name but arguments are difrents
    {
        intresult = a+b;
        cout<<"Addition of two integer :"<<intresult<<endl;

    }
    void add(int x, float y)  // same name and arguments difrent
    {
        floatresult = x+y;
        cout<<"Addition of One integer and float:"<<floatresult<<endl;
    }
    void add(int a1, int b1, float c1)
    {
        floatresult = a1+b1+c1;
        cout<<"Addition of two integer and one float :"<<floatresult<<endl;

    }
};
int main()
{
    Addition a;
    int num1,num2;
    float num;
    cout<<"Enter Any two integers :"<<endl;
    cin>>num1>>num2;
    cout<<"Enter any one integer and one float :"<<endl;
    cin>>num1>>num;
    cout<<"Enter any two integers and one float :"<<endl;
    cin>>num1>>num2>>num;
    a.add(num1,num2);
    a.add(num1,num);
    a.add(num1,num2,num);   // passing values function takes arguments..

    return 0;
}

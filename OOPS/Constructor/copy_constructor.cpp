#include<iostream>
using namespace std;

class Complex
{
    int a,b;
    public:
    
    Complex(){} // you can may be create Default Donstructor otherwise compiler automatically create Default Constructor

    Complex(int x, int y)
    {
        a = x;
        y = y;
    }
    Complex(Complex &c)   // copy constructor..
    {
        a = c.a;
        b = c.b;
        cout<<"Copy Constructor Called a ad b is :"<<a<<" "<<b<<endl;
    }
    void show()
    {
        cout<<"A is "<<a<<" and B is "<<b<<endl;
    }
};
int main()
{
    Complex c1(10, 20);
    Complex c2(c1);
    c1.show();

    return 0;
}
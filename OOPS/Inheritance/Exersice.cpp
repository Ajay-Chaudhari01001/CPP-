#include<iostream>
#include<math.h>
using namespace std;

class Simple{
    protected:
        int a,b;
        int result;
    public:
        void get()
        {
            cout<<"Enter any two numbers for Arithmetic Operations "<<endl;
            cin>>a>>b;
        }
        void display()
        {
            result = a+b;
            cout<<"Addition is " <<a <<" + " <<b<<" = " <<result<<endl;
            result = a-b;
            cout<<"Substraction is " <<a <<" - " <<b<<" = " <<result<<endl;
            result = a*b;
            cout<<"Multiplication is " <<a <<" * " <<b<<" = " <<result<<endl;
            result = a/b;
            cout<<"Devision is " <<a <<" / " <<b<<" = " <<result<<endl;
            result = a%b;
            cout<<"Mod is " <<a <<" % " <<b<<" = " <<result<<endl;
        }
};
class Scientific{
    protected:
        int d;
    public:
        void in()
        {
            cout<<"Enter any number and find squre root "<<endl;
            cin>>d;
        }
        void show()
        {
            cout<<"Squre root of number "<<d<<" is "<<sqrt(d)<<endl;
        }
};
class Run : public Simple, public Scientific{
    public:
        void message()
        {
            cout<<"\t\t\n PROGRAM SUCCESSFULLY RUN....";
        }
};
int main()
{
    Run r;
    r.get();
    r.display();

    r.in();
    r.show();
    r.message();

    return 0;
}
#include<iostream>
using namespace std;

class Hello{
    int a;
    int b;
    int c;
    public:
        // intilize a nd b using initilization constructor method...
        Hello(int x, int y): a(x), b(y), c(x+y){
            cout<<"Initilize Constructor are called.."<<endl;
        }
        void print()
        {
            cout<<"A value is = "<<a<<endl;
            cout<<"B value is = "<<b<<endl;
            cout<<"C value is Addition of a and b = "<<c<<endl;
        }
};
int main()
{
    Hello h(10, 20);
    h.print();
    return 0;
}
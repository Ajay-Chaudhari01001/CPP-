#include<iostream>
using namespace std;

class Base1{
    int data1;
    public:
        Base1(int a1)
        {
            data1 = a1;
            cout<<"Base1 Constructor Called..."<<endl;
        }
        void printBase1()
        {
            cout<<"The Value Of Base1 is = "<<data1<<endl;
        }
};
class Base2{
    int data2;
    public:
        Base2(int b2)
        {
            data2 = b2;
            cout<<"Base2 Constructor Called..."<<endl;
        }
        void printBase2()
        {
            cout<<"The Value Of Base2 is = "<<data2<<endl;
        }
};
class Derived: public Base1, public Base2{
    int data3, data4;
    public:
        Derived(int a, int b, int c, int d): Base1(a), Base2(b){

            data3 = c;
            data4 = d;

            cout<<"Derived Constructor Called..."<<endl;
        }
        void printDerived()
        {
            cout<<"The Value Of Derived is = "<<data3<<" "<<data4<<endl;
        }
};
int main()
{
    Derived d(10,20,30,40);
    d.printBase1();
    d.printBase2();
    d.printDerived();

    return 0;
}
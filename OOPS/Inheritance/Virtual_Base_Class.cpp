#include<iostream>
using namespace std; 

class A{
    protected:
        int number1;
    public:
        void set_number1(int a1)
        {
            number1 = a1;
        }
        void print_number1()
        {
            cout<<"Your 1 Number is = "<<number1<<endl;
        }
};
class B : virtual public A{
    protected:
        int number2;
    public:
        void set_number2(int a2)
        {
            number2 = a2;
        }
        void print_number2()
        {
            cout<<"Your 2 Number is = "<<number2<<endl;
        }
};
class C : virtual public A{
    protected:
        int number3;
    public:
        void set_number3(int a3)
        {
            number3 = a3;
        }
        void print_number3()
        {
            cout<<"Your 3 Number is = "<<number3<<endl;
        }
};
class D : public B, public c{
    protected:
        int number4;
    public:
        void cal_number()
        {
            number4 = number1+number2+number3;
        }
        void print_number4()
        {
            print_number1();
            print_number2();
            print_number3();
            cout<<"Your 4 Number is Addition Of all numbers = "<<number4<<endl;
        }
};
int main()
{
    D d;
    d.set_number1(5);
    d.set_number2(15);
    d.set_number3(15);
    d.cal_number();
    d.print_number4();
    return 0;
}
-
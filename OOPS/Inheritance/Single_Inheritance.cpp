#include<iostream>
using namespace std;

class Base{
    int data1; // it can't be inheritable cause it's by default default data member..
    public:
        int data2;
        void setdata();
        int getdata1();
        int getdata2();
};

void Base :: setdata(){
    data1 = 20;
    data2 = 50;
}

int Base :: getdata1(){
    return data1;
}

int Base :: getdata2(){
    return data2;
}
class Derived: public Base{
    int data3;
    public:

    void process();
    void display();

};

void Derived :: process(){
    data3 = data2*getdata1(); // it's method to access private data member of Base Class..
}

void Derived :: display(){

    cout<<"Data1 is = "<<getdata1()<<endl;
    cout<<"Data2 is = "<<data2<<endl;
    cout<<"Data3 is = "<<data3<<endl;
}
int main(){
    Derived d;
    d.setdata();
    d.getdata1();
    d.getdata2();
    d.process();
    d.display();
}


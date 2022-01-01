#include<iostream>
using namespace std;

class GranFather{
    protected:
    int age1, weight1;
    public:
        void setdata(int a1, int b1)
        {
            age1 = a1;
            weight1 = b1;
        }

};

class Father: public GranFather{
    protected:
    int age2, weight2;
    public:
       void indata(int a2, int b2)
        {
            age2 = a2;
            weight2 = b2;
        }
};

class Child: public Father{
    protected:
    int age3, weight3;
    public:
       void getdata(int a3, int b3)
        {
            age3 = a3;
            weight3 = b3;
        }
        void display()
        {
            cout<<"GradFather Age is = "<<age1 <<" and weight is = "<<weight1<<endl;
            cout<<"Father Age is = "<<age2 <<" and weight is = "<<weight2<<endl;
            cout<<"GradFather Age is = "<<age3 <<" and weight is = "<<weight3<<endl;
        }
};

int main(){
    Child c;
    c.setdata(70, 55);
    c.indata(45, 60);
    c.getdata(20, 45);
    c.display();
    return 0;
}
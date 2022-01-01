// parameterise constructor and constructor overloading..
#include<iostream>
#include<string.h>
using namespace std;

class Constr
{
    int empno;
    char name[20];
    float sal;
    public:
    Constr(int n)    // parameterise constructor.. 
    {
        empno = n;
        strcpy(name,"Ajay");
        sal = 40000;
    }
    Constr(int num, float money)  //constructor overloading..
    {
        empno = num;
        strcpy(name, "Ajay");
        sal = money;
    }
    void show()
    {
        cout<<empno<<"    "<<name<<"    "<<sal<<endl;
    }
};
int main()
{
    int number;
    float s;
    cout<<"Enter Employee Number and Salary:"<<endl;
    cin>>number>>s;
    // whenever object is created constructor are automatically invoked..
    Constr e1(number);   // parameterise constructor 
    Constr e2(number, s);
    Constr e3(number);
    cout<<"EmpNum  Name  Salary "<<endl;
    e1.show();
    e2.show();
    e3.show();

    return 0;
}
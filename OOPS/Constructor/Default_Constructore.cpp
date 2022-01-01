// A default constructor is constructor that takes no parametere..
#include<iostream>
#include<string.h>
using namespace std;

class Constr
{
    int empno;
    char name[20];
    float sal;
    public:
    Constr()    // default constructor.. 
    {
        empno = 151;
        strcpy(name,"Ajay");
        sal = 40000;
    }
    void show()
    {
        cout<<empno<<"    "<<name<<"    "<<sal<<endl;
    }
};
int main()
{
    Constr e1,e2,e3;  // whenever object is created constructor are automatically invoked..
    cout<<"EmpNum  Name  Salary "<<endl;
    e1.show();
    e2.show();
    e3.show();

    return 0;
}
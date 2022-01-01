#include<iostream>
using namespace std;

class Employee
{
    int sal, rent;
    public:
    void get()
    {
        cin>>sal>>rent;
    }
    void add(Employee e4, Employee e5) // collecting objects...
    {
        sal = e4.sal + e5.sal;
        rent = e4.rent + e5.rent;
    }
    void put()
    {
        cout<<sal<<" "<<rent<<endl;
    }
};
int main()
{
    Employee e1,e2,e3;
    cout<<"Enter any 2 employee salary and home rent :"<<endl;
    e1.get();
    e2.get();
    e3.add(e1,e2);  // passing object as arguments...

    cout<<"Salary Home Rent "<<endl;
    e1.put();
    e2.put();
    cout<<"\n";
    e3.put();

    return 0;
}
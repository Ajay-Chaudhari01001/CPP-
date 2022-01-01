// syntax = derived class name : visibility mode _ base class name{}..
#include<iostream>
using namespace std;

// This is a Base Class..
class Employee{ 
    // when we intialise data member are privately, it can't be access from derived class..        
    public:
        int id;
        float salary;
        Employee(){};
        Employee(int emid, float sal)
        {
            id = emid;
            salary = sal;
            cout<<"Employee Id = "<<id <<" Employee Salary = "<<salary<<endl;
        }

};
class Coder : public Employee{
    int age;
    public:
        Coder(int a)
        {
            age = a;
        }
        void show()
        {
           cout<<"Employee Age is = "<<age <<" Id is = "<<id <<" Salary Is = "<<salary<<endl; 
        }
};
int main(){
    Employee e1(151, 54.76);
    Coder c1(20);
    c1.show();
    return 0;
}
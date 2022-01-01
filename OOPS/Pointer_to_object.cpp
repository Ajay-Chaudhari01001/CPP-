#include<iostream>
using namespace std;

class Complex{
    int number;
    public:
        void setdata(int b){
            number = b;
        }
        void showdata(){
            cout<<"Your Number is = "<<number<<endl;
        }
};
int main(){
    Complex *p1 = new Complex;
    p1->setdata(40);   // -> arrow operator for accessing values to function or object of a pointer 
    p1->showdata();

    return 0;
}
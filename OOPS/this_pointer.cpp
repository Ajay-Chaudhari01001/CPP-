#include<iostream>
using namespace std;

class Ajay{
    int a;
    public:
        void getData(int a){
            this->a = a;  // this is keyword like as pointer.
        }
        void shwoData(){
            cout<<"The value of A = "<<a<<endl;
        }
};
int main(){
    Ajay a;
    a.getData(55);
    a.shwoData();

    return 0;
}
// this is keyword which is a pointer which points to the object which invokes the
// member function..
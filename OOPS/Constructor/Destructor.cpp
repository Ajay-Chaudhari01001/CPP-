#include<iostream>
using namespace std;

int count = 0; // global variable declaration..
class Hello{
    
    public:
    Hello()
    {
        count++;
        cout<<" Constructor are called object number count = "<<count<<endl;
    }
    ~Hello()  // we are Destructor can  write tield(~) sign...
    {
        count--;
        cout<<" Destructor are clalled and Destruct the object count = "<<count<<endl;
    }
};
int main(){
    Hello h1;
    {
        cout<<"Enter the block... "<<endl;
        Hello h2, h3;
        cout<<" Exit the block..."<<endl;
    }
    cout<<"Enter Back Main Menu..."<<endl;
    return 0;
}
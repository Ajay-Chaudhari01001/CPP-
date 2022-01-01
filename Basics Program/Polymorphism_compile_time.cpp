 #include<iostream>
 using namespace std;
 class A                                  //  base class declaration.  
  {  
       int a;  
       public:  
       void display()   // function overloading
       {   
             cout<< "Class A ";  
        }  
  };  
class B : public A                       //  derived class declaration.  
{  
    int b;  
    public:  
   void display()  // function overloading use to compile time polymorphism
  {  
        cout<<"Class B"<<endl;  
  }  
};  
int main(){

    B b;
    A a;
    b.display();
    a.display();
    return 0;
}
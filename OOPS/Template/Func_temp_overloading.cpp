#include <iostream>  
using namespace std;  
template<class X> void fun(X a)  
{  
    cout << "Value of a is : " <<a<< std::endl;  
}  
template<class X,class Y> void fun(X b ,Y c)  
{  
    cout << "Value of b is : " <<b<< std::endl;  
    cout << "Value of c is : " <<c<< std::endl;  
}  
int main()  
{  
   fun(10);  
   fun(20,30.5);  
   return 0;  
}  
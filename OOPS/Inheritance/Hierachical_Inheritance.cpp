#include <iostream>
using namespace std;

class X
{
public:
int a, b;
void getdata ()
{
cout << "\nEnter value of a and b:\n"; cin >> a >> b;
}
};

class Y : public X
{
public:
void product()
{
cout << "\nProduct= " << a * b;
}
};

class Z: public X {
public:
void sum()
{
cout << "\nSum= " << a + b;
}
};

int main()
{
Y obj1;
Z obj2;
obj1.getdata();
obj1.product();
obj2.getdata();
obj2.sum();
return 0;
}
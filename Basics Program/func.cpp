#include<iostream>

using namespace std;
void Additon(int *x, int *y)
{
    int c;

    c = *x+*y;

    cout<<"Additon of Two Integers = "<<c<<endl;
}
void maximum(int *x, int *y)
{
    if(*x<*y)
    cout<<" maximum elements = "<<*y<<endl;
    else
    cout<<" maximum elements = "<<*x<<endl;
}
void minimum(int *j, int *e, int *f)
{
    if(*j<*e)
    {
        if(*j<*f)
        cout<<" Minimum element =  "<<*j<<endl;
    }
    else if(*e<*j)
    {
        if(*e<*f)
        cout<<" Minimum element =  "<<*e<<endl;

    }
    else
        cout<<" Minimum element =  "<<*f<<endl;
}
int main()
{
    int x = 10, y= 20, z = 30;

    Additon(&x, &y);
    maximum(&x, &y);
    minimum(&x, &y, &z);

    return 0;
}
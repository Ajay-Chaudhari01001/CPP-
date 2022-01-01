#include<iostream>
using namespace std;

template<class X, class Y> // we can use multiple placeholders..
void additon(X a, Y b){

    cout<<"Sum is = "<<a+b<<endl;
}
int main(){

    additon(34,34);
    additon(3.4, 5.4);
    additon(43, 34.44);

    return 0;
}
    
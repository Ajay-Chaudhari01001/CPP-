// w.a.p. to check given number is even or odd using function
#include<iostream>
using namespace std;

void evenOdd(int n){  

    if(n%2==0)
        cout<<"Number is even number..."<<endl;
    else
        cout<<"Number is odd number..."<<endl;


}
int main(){
    int no;
    cout<<" Enter any number..."<<endl;
    cin>>no;
    evenOdd(no);

    return 0;
}
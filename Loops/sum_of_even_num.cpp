// w.a.p. to find sum of even numbers in range of n..
#include<iostream>
using namespace std;

int main(){

    int num, sum=0;
    cout<<"Enter number.."<<endl;
    cin>>num;
    for(int i=2; i<=num; i+=2){
        
        sum +=i;
    }
    cout<<"Sum of even number in range of num = "<< sum<<endl;
}
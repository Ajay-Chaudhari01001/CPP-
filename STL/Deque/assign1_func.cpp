#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    deque<int>::iterator itr;
    // here 5 is size of array and 6 is elements then print 5 time
    d.assign(5,6); 
    for(itr=d.begin(); itr!=d.end(); itr++)
    {
        cout<<*itr<<" ";
    }
    return 0;
}
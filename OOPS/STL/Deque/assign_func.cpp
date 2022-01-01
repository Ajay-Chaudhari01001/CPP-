#include<iostream>
#include<deque>
using namespace std;
int main(){

    deque<int>first={1,2,3};
    deque<int>second;
    deque<int>::iterator itr=second.begin();
    second.assign(first.begin(),first.end());
    for(itr=second.begin(); itr!=second.end(); ++itr)
    {
        cout<<*itr<<" ";
    }
}
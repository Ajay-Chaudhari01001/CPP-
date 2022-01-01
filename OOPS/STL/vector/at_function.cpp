#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> v1{23,34,45,65};  // initialize vector like array
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1.at(i)<<" ";  // at is a function to point to elements positon
    }
    return 0;
}
// at function is use to access the elements of vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int elements = 10;
    vector<int> v(elements, 5); // elements are size of array we can intialize vector this method
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<"\n";
    }
    return 0;
}

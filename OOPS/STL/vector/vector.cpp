#include<iostream>
#include<vector>
using namespace std;
int main(){
    // by entering a value one by one using push back function.
    vector <string> v1;
    v1.push_back("Ajay ");  
    v1.push_back("Chaudhari");
    for(vector<string>::iterator itr=v1.begin();itr!=v1.end();++itr)
    {
        cout<<*itr;
    }
    return 0;
}
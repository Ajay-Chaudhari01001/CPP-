#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string str1,str2;
    ofstream out;
    out.open("vijay.txt");
    out<<"Hi how are you"<<endl;
    out<<"My name is ajay"<<endl;
    out<<"I am student of bca"<<endl;
    out.close();

    ifstream in;
    in.open("vijay.txt");

    while(in.eof()==0)
    {
        getline(in, str2);
        cout<<str2<<endl;
    }
    return 0;
}
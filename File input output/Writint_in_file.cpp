#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    string name="hello my name is ajay";
    ofstream out; // makeing object of fstream and create new file 
    out.open("ajay.txt");
    out<<name;     // just like cout
    out.close();    // close file after using.

    string str;
    fstream in;
    in.open("ajay.txt");  // open file for reading 
    //in>>str;
    //cout<<str; 
    getline(in, str);
    cout<<str;
    in.close();         // close file 

    return 0;
}
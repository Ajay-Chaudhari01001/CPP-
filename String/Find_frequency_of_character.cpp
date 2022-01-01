#include <iostream>
using namespace std;
int main()
{
string str = "C++ Programming is awesome";  // in double qoutes  are string
char checkCharacter = 'a';
cout<<"Enter any characters :";
cin>>checkCharacter;
int count = 0;
for (int i = 0; i < str.size(); i++)
{
if (str[i] == checkCharacter)
{
++ count;
}
}
cout << "Number of " << checkCharacter << " = " << count;
return 0;
}
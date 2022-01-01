#include <iostream>
using namespace std;
int main() 
{
    char c;
    cout << "Enter a character: ";
    cin >> c;
    cout << "ASCII Value of " << c << " is " << int(c);  // using type castint
    return 0;
}
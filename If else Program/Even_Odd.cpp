#include <iostream>
using namespace std;
int main()
{
int n;
cout << "Enter any number: ";
cin >> n;
if ( n % 2 == 0)
cout << n << " is even.";  // whenever we want excute only one statement so no need to put curly braces
else
cout << n << " is odd.";
return 0;
}
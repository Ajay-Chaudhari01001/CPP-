#include <iostream>
using namespace std;
int main()
{
int year;
cout << "Enter an year : ";
cin >> year;
if (year%4==0 || year%400==0) // (or)|| condition anyone condition are true to print if block otherwise print else block
cout << year << " Year Is Leap Year";  
else
cout << year << " Year Is Not Leap Year";
return 0;
}
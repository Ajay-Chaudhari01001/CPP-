#include <iostream>
using namespace std;
int main()
{
    int data[5];  // intialize array with size..
    cout << "Enter elements: ";
    for(int i = 0; i < 5; ++i)
    cin >> data[i];
    cout << "You entered: ";
    for(int i = 0; i < 5; ++i)
    cout << data[i]<< " ";        //   << *(data + i);
    return 0;
}
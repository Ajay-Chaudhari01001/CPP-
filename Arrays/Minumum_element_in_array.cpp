#include<iostream>
using namespace std;

void minimum(int arr[8])
{
    int min = arr[0];
    // finding minimum element in array
    for(int i=0; i<8; i++)
    {
        if(min>arr[i])  
        min = arr[i];
    }
    cout<<"Minimun Elements In Array = "<<min<<endl;
}
int main()
{
    int a[8]={3,5,7,8,10,23,25,30};
    minimum(a);

    return 0;
}

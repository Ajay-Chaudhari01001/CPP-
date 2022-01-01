#include<iostream>
using namespace std;

void maximum(int arr[8])
{
    int max = arr[0];
    // finding maximum element in array
    for(int i=0; i<8; i++)
    {
        if(max<arr[i])  
        max = arr[i];
    }
    cout<<"Maximun Elements In Array = "<<max<<endl;
}
int main()
{
    int a[8]={3,5,7,8,10,23,25,30};
    maximum(a);

    return 0;
}

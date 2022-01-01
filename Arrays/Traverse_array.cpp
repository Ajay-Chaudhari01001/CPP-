#include<iostream>
using namespace std;

int main()
{
    int size;   // use for how many elements you want to store;
    int arr[100];
    cout<<"Enter Number Of Elements "<<endl;
    cin>>size;
    cout<<"Enter Elements In Array "<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Elements In Array Following "<<endl;
    // it's called as traversing in array means traverse all array and print elements in array;
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
#include<iostream>
#include<array>
using namespace std;

int main()
{
    array <int, 5> array_data={11,22,33,44,39};
    cout<<" Old Array ...."<<endl;
    for(int i=0; i<=4; i++)
    {
        cout<<array_data[i]<<" ";
    }
    cout<<"\n";
    cout<<array_data.at(4)<<endl;  // it is use to access value by index number..
    cout<<array_data[3]<<endl;   // second method to access data in array..
    cout<<array_data.front()<<endl;   // that return array starting value...
    cout<<array_data.back()<<endl;   // return in array of last value...
    array_data.fill(10);   // use to fill same value all array ...
    cout<<"\n New Array ...."<<endl;
    for(int i=0; i<=4; i++)
    {
        cout<<array_data[i]<<" ";
    }

    // after swapping array
    array <int, 6> swap_array1={1,2,3,4,5,6};
    array <int, 6> swap_array2={6,5,4,3,2,1};

    swap_array1.swap(swap_array2);  // swapping array using swap function..

    cout<<" \nNew Array ...."<<endl;
    for(int i=0; i<=4; i++)
    {
        cout<<swap_array1[i]<<" ";
    }
    cout<<"\n";
    for(int i=0; i<=4; i++)
    {
        cout<<swap_array2[i]<<" ";
    }

    cout<<" \n Size is = "<<swap_array2.size();

    return 0;
}
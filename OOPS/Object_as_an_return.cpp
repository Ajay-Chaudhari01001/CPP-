// w. a. p. calculate some of 2 time interval using object as an return... 
#include<iostream>
using namespace std;

class Time
{
    int hh, mm, ss;
    public:
    void get()
    {
        cin>>hh>>mm>>ss;
    }
    friend Time add(Time, Time); // friend function decleration in class..

    void put()
    {
        cout<<hh <<" "<<mm<<" "<<ss<<endl;
    }
};
    Time add(Time x, Time y)  // defination of friend function out side the class..
    {
        Time temp;
        temp.ss = x.ss + y.ss;
        temp.mm = x.mm + y.mm/60;
        temp.ss = temp.ss % 60;
        temp.hh = x.hh + y.hh + temp.mm/60;
        temp.mm = temp.mm%60;

        return(temp);  // object as an return...
    }
int main()
{
    Time t1, t2, t3;
    cout<<"Enter Time 1st Hour Minute Second "<<endl;
    t1.get();
    cout<<"Enter Time 2nd Hour Minute Second"<<endl;
    t2.get();
    t3 = add(t1,t2);  // passing objects as arguments and stored in t3 object

    cout<<"Hour Minute Second"<<endl;
    t1.put();
    t2.put();
    t3.put();
    
    return 0;
}
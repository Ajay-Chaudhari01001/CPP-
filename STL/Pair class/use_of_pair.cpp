#include<iostream>
#include<string>
using namespace std;

class student
{
    private:
        string name;
        int age;
    public:
        void setStudent(string s, int a)
        {
            name = s;
            age = a;           
        }
        void put()
        {
            cout<<name<<" "<<age<<endl;
        }
};
int main()
{
    // create pair for values..
    pair <string, int> p1;
    pair <float, int> p2;
    pair <int, int> p3;
    pair <int, student> p4;

    // set values in pair
    p1 = make_pair("Ajay", 122);
    p2 = make_pair(33.4, 55);
    p3 = make_pair(44,55);
    student s1;
    s1.setStudent("Jayesh", 20);
    p4 = make_pair(34, s1);

    // accessing pair values...
    cout<<"\n Pair 1 = "<<p1.first<<" "<<p1.second<<endl;
    cout<<"  Pair 2 = "<<p2.first<<" "p2.second<<endl;
    cout<<"  Pair 3 = "<<p3.first<<" "p3.second<<endl;
    student s2=p4.first;
    s2.put();
    return 0;
}
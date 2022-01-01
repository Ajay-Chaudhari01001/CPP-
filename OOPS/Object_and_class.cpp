#include<iostream>
using namespace std;

class Student    // class is keyword and Student is class name.. is a simple like structure 
{
    int rollno;    // in class by default data members is private..
    char name[20];
    float per;
    public:             // public is keyword to access member function out side the class..
    void get()
    {
        cin>>rollno>>name>>per;
    }
    void put()
    {
        cout<<"\n"<<rollno<<"\t"<<name<<"\t"<<per<<endl;
    }
};
int main()
{
    Student s1, s2, s3; // creating object of class s1 , s2 , s3 are object of student class...
    cout<<"Enter 1st Student Rollno Name and percentage :"<<endl;
    s1.get();
    cout<<"Enter 2nd Student Rollno Name and percentage :"<<endl;
    s2.get();
    cout<<"Enter 3rd Student Rollno Name and percentage :"<<endl;
    s3.get();

    cout<<"RollNumber  Name  Percentage "<<endl;
    s1.put();
    s2.put();
    s3.put();

    return 0;   // nothing return any value main function .... so we can pass 0
}
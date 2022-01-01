
#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    int rollno;
    char name[20];
    char branch[20];
    public:

    Student()  // Default constructor..
    {
        rollno = 151;
        strcpy(name, "Ajay");
        strcpy(branch, "BCA");
    }
    Student(int n)    // parameterise constructor..
    {
        rollno = n;
        strcpy(name, "Jayesh");
        strcpy(branch, "BCA");
    }
     Student(int nu, char *ne, char *br)  
        rollno = nu;
        strcpy(name, ne);  // copy ne variable in string stored in name variable..
        strcpy(branch, br);
    }
    void show()
    {
        cout<<rollno<<"  "<<name<<"  "<<branch<<endl;
    }

};
int main()
{
    int number;
    char stream[20], na[20];
    Student s1;
    cout<<"Enter Student RollNumber "<<endl;
    cin>>number;
    Student s2(number);
    cout<<"Enter Student RollNumber Branch and Name "<<endl;
    cin>>number>>stream>>na;
    Student s3(number, stream, na);
    cout<<"Rollno Name Branch "<<endl;
    s1.show();
    s2.show();
    s3.show();

    return 0;
}

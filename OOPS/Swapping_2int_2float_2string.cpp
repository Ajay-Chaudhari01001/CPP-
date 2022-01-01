
#include<iostream.>
#include<string.h>
using namespace std;

class Swapping
{
    int int3;
    float float3;
    char *string3;
    public:
    void swap(int num1, int num2)
    {
        cout<<"Before Swapping num1="<<num1<<" "<<"num2="<<num2<<endl;
        int3 = num1;
        num1 = num2;
        num2 = int3;
        cout<<"After Swapping num1="<<num1<<" "<<"num2="<<num2<<endl;
    }
    void swap(float fl1, float fl2)
    {
        cout<<"Before Swapping fl1="<<fl1<<" "<<"fl2="<<fl2<<endl;
        float3 = fl1;
        fl1 = fl2;
        fl2 = float3;
        cout<<"After Swapping fl1="<<fl1<<" "<<"fl2="<<fl2<<endl;
    }
    void swap(char *st1, char *st2)
    {
        cout<<"Before Swapping st1="<<st1<<" "<<"st2="<<st2<<endl;
        strcpy(string3, st1);
        strcpy(st1, st2);
        strcpy(st2, string3);
        cout<<"After Swapping st1="<<st1<<" "<<"st2="<<st2<<endl;
    }
};
int main()
{
    Swapping s;
    int n1,n2;
    float f1,f2;
    char str1[10], str2[10];
    cout<<"Enter any tow int number for Swapping :"<<endl;
    cin>>n1,n2;
    cout<<"Enter any two float number for Swapping :"<<endl;
    cin>>f1>>f2;
    cout<<"Enter any two string values for Swapping :"<<endl;
    gets(str1);
    gets(str2);
    s.swap(n1, n2);
    s.swap(f1, f2);
    s.swap(str1, str2);

    return 0;
}

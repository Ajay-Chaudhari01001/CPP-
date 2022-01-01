#include<iostream>
using namespace std;
void factorial()
{
    int no;
    long int fact=1;
    printf("\n\tEnter any number for get factorial of a number :");
    scanf("%d",&no);
    for(int i=2;i<=no;i++)
    {
        fact = i*fact;
    }
    printf("\n\t %d Factorial is :%d",no,fact);

}
void fibonacci()
{
    int a=0,b=1,c,no;
    printf("\n\t\t Enter Number Distance Of Series :");
    scanf("%d",&no);
    for(int i=2;i<no;i++)
    {
        c = a+b;
        printf("%d + %d = %d\n",a,b,c);
        a=b;
        b=c;

    }
}
void primenumber()
{
     int no,flag = 0;
    printf("Enter a number you want to check number is prime or not :");
    scanf("%d",&no);  
    for(int i=1;i<no;i++)
    {
        if(no%i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("\n %d Is  Prime Number",no);
    }
    else{
        printf("\n %d is Not Prime Number",no);
    }
}
void reversenumber()
{
        int no,rem,reverse=0;
    printf("Enter a number for reverse :");
    scanf("%d",&no);
    while(no!=0)
    {
        rem = no%10;
        reverse = reverse*10+rem;
        no/=10;                       // no = no/10
    }

    printf("\n %d Reverse Number is %d",no,reverse);
}
void palindromenumber()
{
    int no,rev=0,rem;
    printf("Enter number and check number is palindrome or not :");
    scanf("%d",&no);

    int temp = no;
    
    while(no!=0)
    {
        rem = no%10;
        rev = rev*10+rem;
        no = no/10;
    }
    if(temp==rev)
    {
        printf("\n Numbr Is Palindrome Number");
    }
    else
    {
         printf("\n Numbr Is Not Palindrome Number");
    }
}
void armstrongnumber()
{
    int no,rem,sum=0,temp;
    printf("Enter Number And Check Number Is Armstrong are Not :");
    scanf("%d",&no);
     temp=no;
    while(no>0)
    {
        rem = no%10;
        sum = sum+(rem*rem*rem);
        no = no/10;
    }
    if(temp==sum)
    printf("\n %d Number Is Armstrong Number ",sum);
    else
    printf("\n %d Number Is Not Armstrong Number ",sum);
}
int main()
{
   int choice;
   while(1)   
   {
       printf("\n\t\t USING FUNCTIONS \n");
       printf("\n\t 1 Factorial Number :");
       printf("\n\t 2 Fibonacci Series :");
       printf("\n\t 3 Prime Number :");
       printf("\n\t 4 Reverse Number :");
       printf("\n\t 5 Palindrome Number :");
       printf("\n\t 6 Armstron Number :");
       printf("\n\t 7 For Exit :");
       printf("\n\t Please Enter Your Choice :");
       scanf("%d",&choice);

       switch(choice)
       {
           case 1:
                factorial();  //function calling
                break;
            case 2:
                fibonacci(); //function calling
                break;
            case 3:
                primenumber(); //function calling
                break;
            case 4:
                reversenumber(); //function calling
                break;
            case 5:
                palindromenumber();   //fucntion calling
                break;
            case 6:
                armstrongnumber(); //function calling
                break;
            case 7:
                exit(1);   // for exit from all menu
                break;
            default:
                printf("\n\t\t Invalid Choice Number..");  //enter by user wrong choice
                break;
       }

   }
   return 0;
}
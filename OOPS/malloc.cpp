#include <iostream>  
#include<stdlib.h>  
using namespace std;  
  
int main()  
{  
     
  int len;   // variable declaration  
  std::cout << "Enter the count of numbers :" << std::endl;  
  std::cin >> len;  
  int *ptr; // pointer variable declaration  
  ptr=(int*) malloc(sizeof(int)*len);  // allocating memory to  the poiner variable  
  for(int i=0;i<len;i++)  
  {  
      std::cout << "Enter a number : " << std::endl;  
      std::cin >> *(ptr+i);  
  }  
  std::cout << "Entered elements are : " << std::endl;  
   for(int i=0;i<len;i++)  
  {  
     std::cout << *(ptr+i) << std::endl;  
  }  
free(ptr);  
    return 0;  
}  
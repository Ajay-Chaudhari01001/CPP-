#include <stdio.h>  
  
void selection(int arr[], int n)  
{  
    int i, j, small;  
      
    for (i = 0; i < n-1; i++)   
    {  
        small = i; //minimum element in unsorted array  
          
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[small])  
            small = j;  
// Swap the minimum element with the first element  
    int temp = arr[small];  
    arr[small] = arr[i];  
    arr[i] = temp;  
    }  
}  
void input(int arr[], int Lenght)
{
    for(int i=0; i<Lenght; i++)
    {
        scanf("%d",arr[i]);
    }
} 
void Display(int arr[], int n)   
{  
    int i;  
    for (i = 0; i < n; i++)  
        printf("%d ", arr[i]);  
}  
  void search(int arr[], int key, int size)
  {
      int flag =1;
      for(int i=0; i<size-1; i++)
      {
          if(arr[i]==key)
          {
          printf("Number found successfully at index number %d",i);
          flag = 0;
          }
      }
      if(flag==1)
      printf("number not found ");
  }
int main()  
{  
    int array[10]; 
    int size, number;
    printf("Lenght of array \n");
    scanf("%d",&size);  
    printf("Enter a elements"); 
    input(array, size);
    selection(array, size);  
   // printf("\nAfter sorting array elements are - \n");    
   // Display(array, size); 
    printf("\n what you want to search\n ");
    scanf("%d",&number);
    search(array, number, size);
    return 0;  
}    
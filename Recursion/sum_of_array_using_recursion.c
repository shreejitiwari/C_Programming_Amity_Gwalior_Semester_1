#include<stdio.h>
#define SIZE 5

int sumArr(int *, int);

int main()
{
    int arr[SIZE] , i, sum=0;
    printf("Enter %d numbers : ",SIZE);
    for (i=0; i<SIZE; i++)
    {
    scanf("%d", &arr[i]);
    }
  
    sum = sumArr(arr, 0);
    printf("Sum of array = %d",sum);
  
return 0;
}

int sumArr(int arr1[], int start)
{
    if (start>=SIZE)
    {
        return 0;
    }
    
    
    return (arr1[start]+sumArr(arr1, start+1));
    
}

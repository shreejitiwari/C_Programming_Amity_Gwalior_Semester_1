#include<stdio.h>
#define SIZE 5

void printArr(int *, int);

int main()
{
    int arr[SIZE] , i;
    printf("Enter %d numbers : ",SIZE);
    for (i=0; i<SIZE; i++)
    {
    scanf("%d", &arr[i]);
    }
  
    printArr(arr, 0);
  
return 0;
}

void printArr(int arr1[], int start)
{
    if (start>=SIZE)
    {
        return;
    }
    printf("%d\n", arr1[start]);
    printArr(arr1, start+1);
}

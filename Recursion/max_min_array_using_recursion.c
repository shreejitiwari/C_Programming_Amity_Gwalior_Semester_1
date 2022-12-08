#include<stdio.h>
#define SIZE 5

int maxArr(int *, int);
int minArr(int *, int);

int main()
{
    int arr[SIZE] , i, max, min;
    printf("Enter %d numbers : ",SIZE);
    for (i=0; i<SIZE; i++)
    {
    scanf("%d", &arr[i]);
    
  
    max = maxArr(arr, 0);
    min = minArr(arr, 0);
    }
    printf("Max of array = %d",max);
    printf("\nMin of array = %d",min);
  
return 0;
}

int maxArr(int arr1[], int start)
{
    int max;
    if (start>=SIZE-2)
    {   
        if (arr1[start]>arr1[start+1])
        return arr1[start];
    

        else
            return arr1[start+1];
    
    }
    max = maxArr(arr1, start+1);
    if (max>arr1[start])
        return max;

    else
        return arr1[start];
    
    
}

int minArr(int arr1[], int start)
{
    int min;
    if (start>=SIZE-2)
    {   
        if (arr1[start]<arr1[start+1])
        return arr1[start];
    

        else
            return arr1[start+1];
    }

    min = minArr(arr1, start+1);
    if (min>arr1[start])
    {    return arr1[start];}

    else
    {    return min;}
    
    
}

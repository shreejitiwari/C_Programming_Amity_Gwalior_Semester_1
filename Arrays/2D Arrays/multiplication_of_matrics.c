#include<stdio.h>

int main()
{
    int a1[3][3],a2[3][3], row, col, mul_arr[3][3]={0}, elem;

    printf("Enter elements of 1st 3x3 matrics : \n");

    for (int row=0;row<3;row++)
    {   
        for (int col=0;col<3;col++)
        {
            
            scanf("%d", &a1[row][col]);  // Even if we enter elements in matrics format this will be valid.
            
        }
        

    }

    printf("\nEnter elements of 2nd 3x3 matrics : \n");
    for (int row=0;row<3;row++)
    {   
        for (int col=0;col<3;col++)
        {
            
            scanf("%d", &a2[row][col]);  // Even if we enter elements in matrics format this will be valid.
            
        }
        

    }

    printf("\n\nSum array : \n");
    for (int i=0;i<3;i++)
    {   
        for (int row=0;row<3;row++)
        {   
            elem = 0;
            for (int col=0;col<3;col++)
            {   
                elem += a1[row][col]*a2[row][col]; 

            }
        }
        printf("\n");
        

    }



    return 0;

}
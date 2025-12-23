/*2. Write a program to find sum of 2d array elements.*/
#include<stdio.h>
void main()
{
    int arr[2][2], i , j, sum =0;


    for(i=0; i < 2; i++)
    {
        printf("Row %d : ",i+1);
        for (j=0; j < 2; j++)
        {
            printf("\nColumn %d : ",j+1);
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0; i < 2; i++)
    {
        for (j=0; j < 2; j++)
        {
            sum+=arr[i][j];
        }
    }
    printf("\n Sum : %d",sum);
    printf("\n 2D array : \n");
    for(i=0; i < 2; i++)
    {
        for (j=0; j < 2; j++)
        {
            printf("\t%d",arr[i][j]);
        }
        printf("\n");
    }
}

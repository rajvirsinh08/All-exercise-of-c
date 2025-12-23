/*1. Write a program to input a 2d array and print the same in proper format.*/
#include<stdio.h>
void main()
{
    int arr[5][5], i,j;

    for(i=0; i < 5; i++)
    {
        printf("Row %d : ",i+1);
        for (j=0; j < 5; j++)
        {
            printf("\nColumn %d : ",j+1);
            scanf("%d",&arr[i][j]);
        }
    }


    printf("\n 2D array : ");
    for(i=0; i < 5; i++)
    {
        for (j=0; j < 5; j++)
        {
            printf("\t%d",arr[i][j]);
        }
        printf("\n");
    }
}

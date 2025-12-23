/*4. Write a program to find maximum element from 2-Dimensional array.*/
#include<stdio.h>
void main()
{
    int arr[3][3], i, j,max;

    for(i=0; i < 3; i++)
    {
        printf("Row %d : ",i+1);
        for (j=0; j < 3; j++)
        {
            printf("\nColumn %d : ",j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    max=arr[0][0];
    for(i=0; i < 3; i++)
    {
        for (j=0; j < 3; j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
            }
        }
    }
    printf("\n MAX is %d",max);
    printf("\n Array elements : \n");
    for(i=0; i < 3; i++)
    {
        for (j=0; j < 3; j++)
        {
            printf("\t%d",arr[i][j]);
        }
        printf("\n");
    }



}

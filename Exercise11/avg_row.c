/*3. Write a program to find average of each row in a 2d array.*/
#include<stdio.h>
void main()
{
    int arr[2][2], i , j, sum =0;
    float avg;


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
        sum =0;
        avg = 0;
        for (j=0; j < 2; j++)
        {
            sum+=arr[i][j];
        }
        avg=sum/2;
        printf("\n Sum of row %d : %d",i+1,sum);
        printf("\n Avg of row %d : %f",i+1,avg);
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

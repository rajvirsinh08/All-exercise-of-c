//2. Write a program to input a matrix and find its transpose.
#include<stdio.h>
void main()
{
    int arr[10][10],arr2[10][10],i,j,r1,c1,r2,c2,n;
    printf("\n Enter a no of row max[10] allowd : ");
    scanf("%d",&r1);
    printf("\n Enter a no of column max[10] allowed : ");
    scanf("%d",&c1);
    for (i=0;i<r1;i++)
    {
        printf("\n Row %d : ",i+1);
        for(j=0;j<c1;j++)
        {
            printf("\n column %d : ",j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n 1 matrix :\n");
    for (i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
     printf("\n Transform :\n");
    for (i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }
}


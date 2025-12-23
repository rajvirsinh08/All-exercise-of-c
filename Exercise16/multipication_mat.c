//8. Write a program to perform multiplication of two matrices.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    int mat1[10][10],mat2[10][10],r1,r2,c1,c2,i,j,k,result[10][10];
    printf("\n Enter a Matrix 1 Details \n");
    printf("\n Enter no of Rows [max 10] : ");
    scanf("%d",&r1);
    printf("\n Enter no of Column [max 10] : ");
    scanf("%d",&c1);
    for(i=0;i<r1; i++)
    {
        printf("enter %d row ",i+1);
        for(j=0; j<c1; j++)
        {
            printf("\n Column : ");
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("\n Enter a Matrix 2 Details \n");
    printf("\n Enter no of Rows [max 10] : ");
    scanf("%d",&r2);
    printf("\n Enter no of Column [max 10] : ");
    scanf("%d",&c2);
    for(i=0;i<r2; i++)
    {
        printf("enter %d row ",i+1);
        for(j=0; j<c2; j++)
        {
            printf("\n Column : ");
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("\n+++ Matrix 1 +++\n");
    for(i=0 ;i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%d\t",mat1[i][j]);
        }
        printf("\n");
    }
    printf("\n+++ Matrix 2 +++\n");
    for(i=0 ;i<r2; i++)
    {

        for(j=0; j<c2; j++)
        {
            printf("%d\t",mat2[i][j]);
        }
        printf("\n");
    }
    if(c1 != r2)
    {
        printf("\n Multipication is not possible");
        exit(1);
    }
    else
    {
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                result[i][j] = 0;
            }
        }

        for(i=0;i<r1;++i)
        {
            for(j=0;j<c2;++j)
            {
                for(k=0; k<c1; ++k)
                {
                    result[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }
    }
    printf("\n +++ Multipication +++ \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d\t" ,result[i][j]);
        }
        printf("\n");
    }
}

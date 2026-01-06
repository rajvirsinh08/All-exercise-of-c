// 5. Write a program to input a matrix and a scalar number and find its scalar multiplication.
#include <stdio.h>
void main()
{
    int arr[10][10], i, j, r1, c1, n;
    printf("\n Enter a no of row max[10] allowd : ");
    scanf("%d", &r1);
    printf("\n Enter a no of column max[10] allowed : ");
    scanf("%d", &c1);
    for (i = 0; i < r1; i++)
    {
        printf("\n Row %d : ", i + 1);
        for (j = 0; j < c1; j++)
        {
            printf("\n column %d : ", j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n 1 matrix :\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("enter a number to multiply matrix : ");
    scanf("%d", &n);
    printf("\n Production of matrix \n ");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            arr[i][j] = n * arr[i][j];
        }
        printf("\n");
    }

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

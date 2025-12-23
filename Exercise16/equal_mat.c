//4. Write a program to input two matrices and find whether they are equal.
#include<stdio.h>
void main()
{
    int arr[10][10],arr2[10][10],i,j,r1,c1,r2,c2,isequl=1;
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
    printf("Enter 2 matrix \n");
    printf("\n Enter a no of row max[10] allowed : ");
    scanf("%d",&r2);
    printf("\n Enter a no of column max[10] allowed : ");
    scanf("%d",&c2);
    for (i=0;i<r2;i++)
    {
        printf("\nRow %d : ",i+1);
        for(j=0;j<c2;j++)
        {
            printf("\n column %d : ",j+1);
            scanf("%d",&arr2[i][j]);
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
    printf("\n 2 matrix :\n");
    for (i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }

    if (r1==r2 && c1==c2 )
    {
        for (i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                if (arr[i][j] != arr2[i][j])
                {
                    isequl=0;
                    break;
                }

            }
            if(isequl == 0) break;
        }
    }


    if (isequl == 1)
    {
        printf("\n both matrix are same \n ");
    }
    else
    {
        printf("\n not same ");
    }
}

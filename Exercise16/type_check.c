//3. Write a program to input a matrix and find its type - Row Matrix, Column Matrix, Square Matrix, Null Matrix, or Unit Matrix.

#include<stdio.h>
void main()
{
    int arr[10][10],i,j,r1,c1,isnul=1,isunit=1;
    printf("\n Enter a no of row max[10] allowd : ");
    scanf("%d",&r1);
    printf("\n Enter a no of column max[10] allowed : ");
    scanf("%d",&c1);
    for (i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
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

    //check row matrix
    if(r1==1)
    {
        printf("\n Row matrix ");
    }
    //check column matrix
    else if (c1==1)
    {
        printf("\n Column matrix ");
    }
    //check square matrix
    else if (r1==c1)
    {
        printf("\n square matrix ");
    }
    //check null matrix

    for (i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            if(arr[i][j] != 0)
            {
                isnul = 0;
                break;
            }
        }
        if(isnul==0)
            break;
    }

    if (isnul==1)
    {
        printf("\n Null Matrix");
    }

    //check unit matrix
    if(r1==c1)
    {
        for (i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                if(i==j && arr[i][j]!=1)
                {
                    isunit = 0;
                    break;
                }
                if(i!=j&& arr[i][j] != 0)
                {
                    isunit = 0;
                    break;
                }
            }
            if(isunit==0)
                break;
        }
    }
    if (isunit==1)
    {
        printf("\n UNIT matrix \n ");
    }
}

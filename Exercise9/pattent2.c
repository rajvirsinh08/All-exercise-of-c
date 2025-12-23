/*write a program to print pattent*/
#include<stdio.h>
void main()
{
    int i,j,n,k;
    printf("enter number of rows : ");
    scanf("%d",&n);

    for (i=0;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

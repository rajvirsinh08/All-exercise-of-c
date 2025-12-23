/*write a program to print pattent*/
#include<stdio.h>
void main()
{
    int i,j,k,n;
    printf("please enter no of rows : ");
    scanf("%d",&n);

    for (i = 0 ; i <= n ; i++)
    {
        for( j = 1 ; j <= n-i; j++)
        {
            printf(" ");
        }
        for (k=1;k<=i;k++)
        {
            printf("*");
        }

        printf("\n");
    }
}

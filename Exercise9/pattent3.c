/*write a program to print pattent*/
#include<stdio.h>
void main()
{
    int i,j,k,n;
    printf("enter number of rows : ");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

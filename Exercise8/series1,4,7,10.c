/* Write a program to print n terms of the series - 1,4,7,10,...*/

#include<stdio.h>
void main()
{
    int i, t, n;
    printf("enter number of tearms : ");
    scanf("%d",&n);
    t = 1;
    for(i=1;i<=n;i++)
    {
        printf("%d\t",t);
        t = t+3;

    }

}

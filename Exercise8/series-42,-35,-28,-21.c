/* Write a program to print sum of n terms of the series - -42,-35,-28,-21,...*/
#include<stdio.h>
void main()
{
    int i, t, n;
    printf("enter tearms : ");
    scanf("%d",&n);
    t = -42;
    for(i=0; i<=n; i++)
    {
        printf("%d\t",t);
        t = t+7;
    }
}

/*Write a program to print sum of n terms of the series - 1,3,7,15,31,...*/
#include<stdio.h>
void main()
{
    int i, t, n;
    printf("enter tearms : ");
    scanf("%d",&n);
    t = 1;
    for(i=0;i<=n;i++)
    {
        printf("%d\t",t);
        t = t *2+1;
    }
}

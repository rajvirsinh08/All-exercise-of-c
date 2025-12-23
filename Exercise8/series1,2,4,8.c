/*Write a program to print n terms of the series - 1,2,4,8,16,...*/
#include<stdio.h>
void main()
{
    int i, n, t;
    printf("please enter tearms : ");
    scanf("%d",&n);
    t = 1;
    for (i =0;i<=n;i++)
    {
        printf("\t%d",t);
        t = t*2;
    }
}

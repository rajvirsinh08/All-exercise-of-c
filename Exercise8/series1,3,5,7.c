/*Write a program to print n terms of the series - 1,3,5,7,9,...*/

#include<stdio.h>
void main()
{
    int i,n,t;
    printf("enter a terms to print : ");
    scanf("%d",&n);
    t = 1;
    for(i=1;i<=n;i++)
    {
        printf("\t%d",t);
        t=t+2;
    }
}

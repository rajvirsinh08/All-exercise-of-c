/*Write a program to print n terms of the series - 1,2,4,7,11,16,...*/
#include<stdio.h>
void main()
{
    int i, t, n;
    printf("enter terms : ");
    scanf("%d",&n);
    t=1;

    for (i=0;i<=n;i++)
    {
        t = t + i;
        printf("%d\t",t);

    }
}

/*Write a program to print n terms of fibonacci series - 1,1,1,3,5,9,17,31,...*/
#include<stdio.h>
void main()
{
    int i, t, t1, t2, t3, n;
    printf("enter terms : ");
    scanf("%d",&n);
    t1 = 1;
    t2 = 1;
    t3 = 1;
    printf("%d\t%d\t%d\t",t1, t2, t3);
    for(i=3; i<=n; i++)
    {
        t = t1+t2+t3;
        printf("%d\t",t);
        t1 =t2;
        t2 =t3;
        t3 = t;
    }
}

/*Write a program to print sum of n terms of the series - 2, -4, 6, -8, 10, -12, ...*/
#include<stdio.h>
void main()
{
    int i, n, t, sig;
    printf("enter tearns : ");
    scanf("%d",&n);
    t =2;
    sig=1;
    for(i = 0; i<=n; i++)
    {
        printf("%d\t",t*sig);
        sig= sig*-1;
        t = t + 2;
    }
}

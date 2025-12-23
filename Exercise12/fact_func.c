/* Write a program to calculate factorial of a number using a function*/
#include<stdio.h>
void main()
{
    int n,res;
    int fact(int n);
    printf("enter number to fact : ");
    scanf("%d",&n);
    res = fact(n);
    printf("factorial : %d",res);
}

int fact(int n)
{
    int f;
    f= 1;
    for(int i=1;i<=n;i++)
    {
        f *= i;
    }
    return f;
}

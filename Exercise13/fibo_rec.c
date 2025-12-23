/*5. Print n terms of the fibonacci series using recursion.*/

#include<stdio.h>
void main()
{
    int n,res,i;
    int fib(int n);
    printf("enter number to fibo : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        res = fib(i);
        printf("%d ",res);
    }



}

int fib(int n)
{
    if(n==1 || n== 2)
    {
        return 1;
    }
    return fib(n-1)+fib(n-2);
}

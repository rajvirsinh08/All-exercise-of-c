/*Calculate factorial of a number using recursion.*/
#include<stdio.h>
void main()
{
    int res,n;
    int fact(int n);
    printf("Enter number to factorial : ");
    scanf("%d",&n);
    res = fact(n);
    printf("Factorial is %d",res);
}

int fact(int n)
{
    if(n==1)
        return 1;
    return n*fact(n-1);
}

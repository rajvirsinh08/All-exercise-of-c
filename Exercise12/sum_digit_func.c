/*6. Write a program to calculate sum of digits of a number using a function*/

#include<stdio.h>
void main()
{
    int res,n;
    int sum(int n);
    printf("Enter a Digit : ");
    scanf("%d",&n);
    res = sum(n);
    printf("Sum of Digit is %d",res);
}

int sum(int n)
{
    int r, s = 0;

    while (n > 0)
    {
        r = n % 10;
        s = s + r;
        n = n / 10;
    }

    return s;
}

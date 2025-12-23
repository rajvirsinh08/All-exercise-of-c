//1. Write a program to input a number and check whether it is even/odd.

#include<stdio.h>
void main()
{
    int a;
    printf("enter number to check even or odd  ");
    scanf("%d",&a);
    if (a % 2 == 0)
    {
        printf("%d is even ",a);
    }
    else
    {
        printf("%d is odd ",a);
    }
}

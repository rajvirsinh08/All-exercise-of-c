//2. Write a program to input a number and check whether it is divisible by 3.

#include<stdio.h>
void main()
{
    int a;
    printf("enter number to check divisibal by 3 ");
    scanf("%d",&a);
    if(a%3==0)
    {
        printf("%d is divisibal by 3",a);
    }
    else
    {
        printf("%d is not divisibal by 3",a);
    }
}

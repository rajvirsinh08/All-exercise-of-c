//3. Write a program to input a number and check whether it is positive/negative.

#include<stdio.h>
void main()
{
    int a;
    printf("enter number to check positive or negitave ");
    scanf("%d",&a);
    if(a>0)
    {
        printf("%d is positive",a);
    }
    else
    {
        printf("%d is negitave",a);
    }
}

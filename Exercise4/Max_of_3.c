/*Write a program to input three numbers and find the maximum of these numbers. */
#include<stdio.h>
void main()
{
    int num1,num2,num3;
    printf("Enter three numbers : ");
    scanf("%d %d %d",&num1, &num2, &num3);

    if(num1>num2)
    {
        if(num1>num3)
        {
            printf("first number is MAX");
        }
        else
        {
            printf("Third number is MAX");
        }
    }
    else
    {
        if(num2>num3)
        {
            printf("Second number is MAX");
        }
        else
        {
            printf("Third number is MAX");
        }
    }
}

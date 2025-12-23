/*Write a program to check whether a given number is even or odd.*/
#include<stdio.h>
void main()
{
    int number;
    printf("enter a number to check even or odd :");
    scanf("%d",&number);

    if(number % 2 == 0)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }
}

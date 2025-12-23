/*Write a program to check the maximum of 2 numbers.*/
#include<stdio.h>
void main()
{
    int number1, number2;
    printf("Enter two number to check Maximum number: ");
    scanf("%d",&number1,&number2);

    if(number1>number2)
    {
        printf("\n %d is Max.",number1);
    }
    else
    {
        printf("\n %d is Max.",number2);
    }
}

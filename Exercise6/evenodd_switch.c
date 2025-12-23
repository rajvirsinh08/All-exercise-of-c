/* Write a program to input a number and check whether it is even or odd using switch case.*/
#include<stdio.h>
void main()
{
    int n;
    printf("enter number to check even or odd : ");
    scanf("%d",&n);
    switch(n % 2 == 0)
    {
        case 1:
            printf("\n Even Number");
            break;
        default:
            printf("\n Odd Number");
            break;
    }
}

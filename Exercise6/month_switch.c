/* Write a program to input a number and print its corresponsing month name.*/
#include<stdio.h>
void main()
{
    int month;
    printf("\n Please enter month : ");
    scanf("%d",&month);
    switch(month)
    {
        case 1:
            printf("\n January");
            break;
        case 2:
            printf("\n febuary");
            break;
        case 3:
            printf("\n March");
            break;
        case 4:
            printf("\n April");
            break;
        case 5:
            printf("\n May");
            break;
        case 6:
            printf("\n June");
            break;
        case 7:
            printf("\n July");
            break;
        case 8:
            printf("\n August");
            break;
        case 9:
            printf("\n Septamber");
            break;
        case 10:
            printf("\n Octomber");
            break;
        case 11:
            printf("\n November");
            break;
        case 12:
            printf("\n December");
            break;
        default:
            printf1("invalid choice ");
            break;

    }
}

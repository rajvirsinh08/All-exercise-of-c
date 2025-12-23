/*Write a program to input an year and check whether it is a leap year. Use logical operators*/
#include<stdio.h>
void main()
{
    int y;
    printf("please enter a year:");
    scanf("%d",&y);

    if( (y % 400 == 0) || (( y % 100 != 0)&&(y % 4 == 0)) )

        printf("year is leap year");

    else
        printf("year is not leap year");
}

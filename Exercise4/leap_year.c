/* Write a program to input an year and check whether it is a leap year. Use nested if-else.*/
#include<stdio.h>
void main()
{
    int y;
    printf("\n Enter Year to check Leap year or Not : ");
    scanf("%d",&y);

    if( y % 400 == 0)
    {
        printf("this %d is leap year",y);
    }
    else
    {
        if(y % 4 == 0)
        {
            if ( y % 100 != 0)
            {
                printf("this %d is leap year",y);
            }
        }
        else
        {
            printf("this %d is not leap year",y);
        }

    }
}

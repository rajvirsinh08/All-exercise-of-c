/*Write a program to input total number of days and convert them into years, months, weeks and days.*/
#include<stdio.h>
void main()
{
    int total_days, y, m, w, d;
    printf("please enter total number of days :");
    scanf("%d",&total_days);
    y = total_days / 365;
    total_days = total_days % 365;
    m = total_days / 31;
    total_days = total_days % 31;
    w = total_days / 7;
    total_days = total_days % 7;
    d = total_days;

    printf("\n time freame :");
    printf("\n years: %d",y);
    printf("\n Months: %d",m);
    printf("\n Weeks: %d",w);
    printf("\n Days: %d",d);
}

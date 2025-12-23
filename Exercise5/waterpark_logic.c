/*Write a program to find whether one is allowed to enter in waterpartk.
You are allowed to enter a waterpark only if your height is between 3.5 and 6 feet. */
#include<stdio.h>
void main()
{
    float h;
    printf("please enter your height");
    scanf("%f",&h);

    if(h<=6 && h>=3.5)

        printf("Are you allowed");

    else

        printf("sorry you are not allowd");
}

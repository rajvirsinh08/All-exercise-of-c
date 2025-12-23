/*Write a program to input hrs, mins, and seconds and convert    it into total number of seconds*/
#include <stdio.h>
void main()
{
    int total_sec,hr,min,sec;
    printf("enter hours,minutes and seconds :");
    scanf("%i %i %i",&hr,&min,&sec);
    total_sec = (hr * 3600) + (min * 60) + sec;
    printf("total number of seconds are :%i",total_sec);
}

/*Write a program to input total number of seconds and convert them into hours, minutes, and seconds.*/
#include<stdio.h>
void main()
{

    int total_sec,hr,min,sec;
    printf("please enter total number of seconds :");
    scanf("%d",&total_sec);
    hr = total_sec / 3600;
    total_sec = total_sec % 3600;
    min = total_sec / 60;
    total_sec = total_sec % 60;
    sec = total_sec;

    printf("\n______TIME______");
    printf("\n Hours   :%d ",hr);
    printf("\n Minutes :%d ",min);
    printf("\n Seconds :%d ",sec);

    return 0;
}

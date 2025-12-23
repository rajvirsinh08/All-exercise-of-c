/*Write a program to calculate reverse of a number using a function*/
#include<stdio.h>
void main()
{
    int res,num;
    int rev(int num);
    printf("enter number to reverse : ");
    scanf("%d",&num);
    res = rev(num);
    printf("reverse : %d",res);

}


int rev(int num)
{
    int r = 0;
    int digit;

    while (num > 0)
    {
        digit = num % 10;
        r = r * 10 + digit;
        num = num / 10;
    }

    return r;
}

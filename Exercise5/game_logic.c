/*Write a program to input an amount to gamble along with numbers selected on three wheels rotated by users. If all the 3 numbers are same,
then the amount will be 80 times. If any 2 numbers are same, then the amount is doubled. In all other cases, the amount will be forefeited. */
#include<stdio.h>
void main()
{
    int n1,n2,n3,amount;
    printf("enter any three number :");
    scanf("%d %d %d",&n1,&n2,&n3);
    printf("Enter your amount to bet :");
    scanf("%d",&amount);

    if(n1==n2 && n2==n3)
        amount = amount * 80;
    else if (n1==n2 || n2==n3||n3==n1)
        amount = amount * 2;
    else
        amount = 0;
    printf("\n your amount is %d",amount);
}

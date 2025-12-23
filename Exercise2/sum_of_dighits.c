/* Write a program to input a 4 digit number and print the sum of digits. */
#include<stdio.h>
void main()
{
    int number, n1, n2, n3, n4, sum;
    printf("please enter 4 digit number :");
    scanf("%d",&number);
    n1 = number % 10 ;
    number = number / 10;
    n2 = number % 10 ;
    number = number / 10;
    n3 = number % 10 ;
    number = number / 10;
    n4 = number % 10;
    number = number / 10;

    sum = n1+n2+n3+n4;
    printf("\n sum of number 4 is %d",sum);


}

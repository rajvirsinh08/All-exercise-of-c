/*Write a program to input a lowercase letter and print its corresponding uppercase letter.*/
#include<stdio.h>
void main()
{
    char a;
    printf("write any character to convert UPPERCASH : ");
    scanf("%c",&a);
    a = a - 32;
    printf("UPPERCASH is %c",a);
}

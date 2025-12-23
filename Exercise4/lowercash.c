/*Write a program to input an uppercase letter and print its corresponding lowercase letter.*/
#include<stdio.h>
void main()
{
    char a;
    printf("Enter a chacarater to convert lowercash : ");
    scanf("%c",&a);
    a = a + 32;
    printf("lowercash : %c",a);
}

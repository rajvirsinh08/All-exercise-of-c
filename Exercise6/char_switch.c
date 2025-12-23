/*Write a program to input a character from the user and print whether it is an alphabet, digit, or special character.*/
#include<stdio.h>
void main()
{
    char a;
    printf("please enter any char ");
    scanf("%c",&a);
    if((a>='A'&&a<='Z')||(a>='a' && a<='z'))
        printf("\n you are entered char");
    else if (a>='0'&&a<='9')
        printf("\n you are entered number");
    else
        printf("\n entered Special Char");
}

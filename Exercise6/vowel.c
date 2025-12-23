/* Write a program to input a character from the user and print whether it is a vowel or consonant.*/
#include<stdio.h>
void main()
{
    char a;
    printf("\n enter a character : ");
    scanf("%c",&a);
    if(!((a>='A' && a<='Z')||(a>='a' && a<='z')))
        printf("please enter a char");
    else if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U'||a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
        printf("\n char is vowel!");
    else
        printf("\n char is a consonant");
}

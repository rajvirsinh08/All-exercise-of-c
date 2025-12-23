/*Write a program to input an amount in terms of rupees. The program should output the number of notes of denomination 2000, 500, 100, 50, 20, 10, 5, 2, and 1 this amount will consist of. The program should give the combination with minimum number of notes.*/
#include<stdio.h>
void main()
{
    int rupees,n2000,n500,n100,n50,n20,n10,n5,n2,n1;
    printf("please enter total rupees :");
    scanf("%d",&rupees);
    n2000 = rupees / 2000;
    rupees = rupees % 2000;
    n500 = rupees / 500;
    rupees = rupees % 500;
    n100 = rupees / 100;
    rupees = rupees % 100;
    n50 = rupees / 50;
    rupees = rupees % 50;
    n20 = rupees / 20;
    rupees = rupees % 20;
    n10 = rupees / 10;
    rupees = rupees % 10;
    n5 = rupees / 5;
    rupees = rupees % 5;
    n2 = rupees / 2;
    rupees = rupees % 2;
    n1 = rupees;


    printf("\nBreakdown of notes:\n");
    printf("2000 : %d\n", n2000);
    printf("500  : %d\n", n500);
    printf("100  : %d\n", n100);
    printf("50   : %d\n", n50);
    printf("20   : %d\n", n20);
    printf("10   : %d\n", n10);
    printf("5    : %d\n", n5);
    printf("2    : %d\n", n2);
    printf("1    : %d\n", n1);
}

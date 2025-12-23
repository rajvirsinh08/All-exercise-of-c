/* Write a program to input total notes of Rs. 20, 10, 5, 2,    and 1 and calculate total amount.*/
#include <stdio.h>
void main()
{
    int n20, n10, n5, n2, n1, total;
    printf("please enter number of notes of 20, 10, 5, 2, 1");
    scanf("%d %d %d %d %d",&n20, &n10, &n5, &n2, &n1);
    total = (n20 * 20) + (n10 * 10) + (n5 * 5) + (n2 * 2) + n1;
    printf("total amount is %d",total);
}

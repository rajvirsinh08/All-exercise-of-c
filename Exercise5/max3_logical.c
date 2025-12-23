/*Write a program to input three numbers and find the maximum of these numbers. Use logical operators.*/
#include<stdio.h>
void main()
{
    int n1,n2,n3,max;
    printf("enter any three number");
    scanf("%d %d %d", &n1, &n2,&n3);

    if(n1>n2 && n1>n3)
        printf("%d is max",n1);
    else if (n2>n3 && n2>n1)
        printf("%d is max",n2);
    else
        printf("%d is max",n3);
}

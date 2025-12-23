//4. Write a program to demonstrate pointers specifically * and & operator.
#include<stdio.h>
void main()
{
    int a,b;
    void swap(int *a,int *b);
    printf("Enter 2 numbers : ");
    scanf("%d %d",&a,&b);
    printf("\nbefore swaping : %d",a);
    printf("\nbefore swaping : %d",b);
    swap(&a,&b);
    printf("\nAfter Swaping ");
    printf("\nbefore swaping : %d",a);
    printf("\nbefore swaping : %d",b);
}

void swap(int *a ,int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

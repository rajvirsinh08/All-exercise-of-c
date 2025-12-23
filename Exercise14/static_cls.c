/*2. Write a program to demonstrate static storage classes.*/
#include<stdio.h>
void main()
{
    show();
    show();
    show();
}

void show()
{
    //if u can remove static then print only number not update
    static int a = 5;
    printf("A : %d\n",a);
    a++;
}

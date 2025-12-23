//5. Demostrate the difference between call by value and call by reference by writing programs to swap 2 numbers.
#include<stdio.h>
void main()
{
    int a =10, *p;
    p=&a;
    printf("A = %d",*p);
}

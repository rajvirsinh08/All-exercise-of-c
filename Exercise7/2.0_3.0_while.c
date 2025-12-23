/*Write a program to print the following
	2.0	2.2	2.4	2.6	2.8	3.0*/
#include<stdio.h>
void main()
{
    float a;
    a = 2.0;
    while(a<=3.2)
    {
        printf("\n %f",a);
        a = a+ 0.2;
    }
}

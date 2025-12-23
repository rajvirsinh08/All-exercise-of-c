/*Write a program to subtract one float from one int using a function*/
#include<stdio.h>
void main()
{
    int a;
    float result,b;
    float sub(float b, int a);
    printf("enter float number :");
    scanf("%f",&b);
    printf("enter Integer number :");
    scanf("%d",&a);
    result = sub(b,a);
    printf("Substraction :%f",result);
}

float sub(float b, int a)
{
    float r;
    r = b-a;
    return r;
}

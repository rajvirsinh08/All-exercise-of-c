/* Write a program to multiply one int and one float using a function*/
#include<stdio.h>
void main()
{
    int a;
    float b, result;
    float mul(int a, float b);
    printf("enter one integer : ");
    scanf("%d",&a);
    printf("enter float Number : ");
    scanf("%f",&b);
    result = mul(a,b);
    printf("Multipication of Int and Float is %f",result);
}

float mul(int a, float b)
{
    float result;
    result = b * a;
    return result;
}

/* Write a program to calculate x^y using a function*/
#include<stdio.h>
void main()
{
    int a,b,res;
    int pow(int a, int b);
    printf("enter a base : ");
    scanf("%d",&a);
    printf("enter pow : ");
    scanf("%d",&b);
    res = pow(a,b);
    printf("Power is : %d",res);

}

int pow(int a, int b)
{
    int r;
    r=1;
    for(int i=1;i<=b;i++)
    {
        r = r * a;
    }
    return r;
}

//4. Write a program to input a number and check whether it is prime.

#include<stdio.h>
void main()
{
    int a,i;
    printf("enter number to check prime ");
    scanf("%d",&a);
    int isprime=1;
    for(i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            isprime=0;
            break;
        }

    }
    if(isprime==1)
        printf("Number is prime");
    else
        printf("Number is not prime");
}


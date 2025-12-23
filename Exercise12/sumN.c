/*7. Write a program that defines a function to add first n numbers. */
#include<stdio.h>
void main()
{
    int res,num;
    int sumN (int num);
    printf("Enter N number to sum : ");
    scanf("%d",&num);
    res = sumN(num);
    printf("Sum of %d number is %d ",num,res);
}

int sumN(int num)
{
    int a=0;
    for(int i=1;i<=num;i++)
    {
        a+=i;
    }
    return a;
}

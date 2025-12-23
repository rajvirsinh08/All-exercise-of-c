//6. Write a program to calculate lcm.

#include<stdio.h>
void main()
{
    int n1,n2,res;
    int gcde(int n1,int n2);
    printf("enter 2 numbers : ");
    scanf("%d %d",&n1,&n2);
    res = n1*n2 / gcde(n1,n2);
    printf("result is %d",res);
}

int gcde(int n1,int n2)
{
    if (n2 == 0)
        return n1;
    return gcde(n2, n1%n2);
}

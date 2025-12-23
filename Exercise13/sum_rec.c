/*4. Calculate sum of digits of a number using recursion.*/

#include<stdio.h>
void main()
{
    int num,res;
    int sum(int num);
    printf("enter anu number : ");
    scanf("%d",&num);
    res=sum(num);
    printf("sum of digits is %d\n", res);

}

int sum(int num)
{
    if (num==0)
        return 0;

    int a = num % 10;

    return a+sum(num/10);
}

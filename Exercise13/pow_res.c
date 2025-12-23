/*Calculate power of a number using recursion.*/
#include<stdio.h>
void main()
{
    int b,e,res;
    int pow(int b, int e);
    printf("enter a numner : ");
    scanf("%d",&b);
    printf("enter exponand : ");
    scanf("%d",&e);
    res=pow(b,e);
    printf("result is %d",res);
}

int pow(int b,int e)
{
    if(e==0)
        return 1;
    return b*pow(b,e-1);
}

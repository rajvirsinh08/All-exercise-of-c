/*3. Calculate reverse of a number using recursion.*/

#include<stdio.h>
void main()
{
    int n,res;
    int rev(int n);
    printf("enter anu number : ");
    scanf("%d",&n);
    res=rev(n);
    printf("Reverse Number is %d\n", res);


    /*int rev;
    while(num!=0)
    {
        int rem = num % 10;
        rev = rev*10+rem;
        num = num/10;
    }

    printf("Reverse Number is %d\n", rev);*/

}

int rev(int n)
{
    int d;
    int static revn=0;
    if(n>0)
    {
        d=n%10;
        revn=revn*10+d;
        rev(n/10);
    }
    return revn;
}

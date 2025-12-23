/*write a program to print pattent*/
#include<stdio.h>
void main()
{
    int i,j,k,n;

    printf("enter no of rows : ");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        char ch='A';
        for(j=1;j<=i;j++)
        {
            printf("%c",ch);
            ch++;
        }
        printf("\n");

    }

}

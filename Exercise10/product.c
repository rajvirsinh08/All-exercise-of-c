/*9. Write a program to find product of array elements.*/
#include<stdio.h>
void main()
{
    int arr[10], i,pro=1;

    for(i=0;i<10;i++)
    {
        printf("enter element %d ",i+1);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<10;i++)
    {
        pro *= arr[i];
    }

    printf("\n Product are : %d",pro);
    printf("\n Array elements are : ");
    for(i=0;i<10;i++)
    {
        printf("\t%d",arr[i]);
    }
}

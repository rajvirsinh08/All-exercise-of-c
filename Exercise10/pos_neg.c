/*8. Write a program to to count number of positive and negative numbers in an array.*/
#include<stdio.h>
void main()
{
    int arr[10],pos=0,neg=0,i;

    for(i=0;i<10;i++)
    {
        printf("enter element %d ",i+1);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<10;i++)
    {
        if(arr[i]<0)
        {
            neg+=1;
        }
        else
        {
            pos+=1;
        }
    }
    printf("\n Positive : %d",pos);
    printf("\n Negative : %d",neg);
    printf("\n Array Elements : ");
    for (i=0;i<10;i++)
    {
        printf("%d\t",arr[i]);
    }
}

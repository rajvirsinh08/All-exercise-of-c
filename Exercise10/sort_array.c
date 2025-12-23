/*6. Write a program to sort given array in ascending order.*/
#include<stdio.h>
void main()
{
    int arr[5],i,temp,j;

    for(i=0;i<5;i++)
    {
        printf("array element %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                temp= arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for (i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
}

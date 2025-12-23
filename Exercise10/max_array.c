/*5. Write a program to find maximum element from 1-Dimensional array.*/
#include<stdio.h>
void main()
{
    int arr[5],i,max;

    for(i=0;i<5;i++)
    {
        printf("array element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    max = arr[0];

    for(i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }

    printf("\n MAX is %d",max);
    printf("\n Array Elements are : ");
    for (i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
}

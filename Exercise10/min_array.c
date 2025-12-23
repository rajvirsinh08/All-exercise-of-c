/*7. Write a program to find minimum element from 1-Dimensional array.*/
#include<stdio.h>
void main()
{
    int arr[5],i,min;

    for(i=0;i<5;i++)
    {
        printf("array element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    min = arr[0];

    for(i=0;i<5;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }

    printf("\n MIN is %d",min);
    printf("\n Array Elements are : ");
    for (i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
}

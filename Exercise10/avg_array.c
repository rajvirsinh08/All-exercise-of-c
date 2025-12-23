/*3. Write a program to find average of array elements.*/
#include<stdio.h>
void main()
{
    int arr[5],i,sum;
    float avg;
    sum=0;

    for(i=0;i<5;i++)
    {
        printf("\n enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<5;i++)
    {
        sum+=arr[i];
    }
    avg=sum/5.0;
    printf("\n Sum is %d ",sum);
    printf("\n Average is %f ",avg);
    printf("\n array elements are : \t");
    for(i=0;i<5 ;i++)
    {
        printf("%d\t",arr[i]);
    }
}

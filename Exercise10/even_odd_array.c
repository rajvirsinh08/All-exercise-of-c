/*4. Design a C program to count number of even and odd numbers in an array*/
#include<stdio.h>
void main()
{
    int arr[10],i,even=0,odd=0;

    for(i=0;i<10;i++)
    {
        printf("enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<10;i++)
    {
        if(i%2==0)
        {
            even+=1;
        }
        else
        {
            odd+=1;
        }
    }
    printf("\n Total Even : %d",even);
    printf("\n Total Odd : %d",odd);
    printf("\n Array Elements are : ");
    for(i=0;i<10 ;i++)
    {
        printf("%d\t",arr[i]);
    }
}

/*1. Write a program to calculate average and total of 5 students for 3 subjects (use nested for loops)*/
#include<stdio.h>
void main()
{
    int arr[3],i,j;
    float avg;
    for(i=0;i<3;i++)
    {
        float sum =0;
        printf("student %d marks \n ",i+1);
        for(j=0;j<3;j++)
        {
            printf("\n subject marks %d : ", j+1);
            scanf("%d",&arr[j]);
            sum += arr[j];
        }

        avg = sum / 3.0;

        printf(" Total = %.2f\n", sum);
        printf(" Average = %.2f\n", avg);
    }
}

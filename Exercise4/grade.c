/*Write a program to input subjects of 3 marks (out of 100) and print the grade as per the percentage
	Percentage		Grade
	85-100			S
	75-84			A
	60-74			B
	50-59			C
	0-49			F*/

#include<stdio.h>
void main()
{
    int sub1,sub2,sub3;
    float per;
    printf("Enter 3 subjects marks");
    scanf("%d %d %d",&sub1,&sub2,&sub3);
    per = sub1 + sub2 + sub3 / 3.0;

    if (per >= 85)
    {
        printf("\n Grade : S");
    }
    else
    {
        if(per >= 75)
        {
            printf("\n Grade : A");
        }
        else
        {
            if(per >= 60)
            {
                printf("\n Grade : B");
            }
            else
            {
                if(per >= 50)
                {
                    printf("\n Grade : C");
                }
                else
                {
                    printf("\n You are failed");
                }
            }
        }
    }
}

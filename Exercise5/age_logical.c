/*Write a program to input age of a person and print appropriate message. Use logical operators
	Age			Message
	70-100			Super Senior Citizen
	60-69			Senior Citizen
	40-59			Middle Aged
	18-39			Mature
	0-17			Kid*/
#include<stdio.h>
void main()
{
    int age;
    printf("please enter age");
    scanf("%d",&age);
    if(age>=70 && age<=100)
        printf("\n super senior citizen");
    else if (age>=60 && age<=69)
        printf("\n senior citizen");
    else if (age>=40 && age<=59)
        printf("\n middle aged");
    else if (age>=18 && age<=39)
        printf("\n Adult");
    else if (age>=1 && age<=17)
        printf("\n kid");
    else
        printf("\n invaid argument");
}

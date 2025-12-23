/*A student is awarded honors if he obtains 85% or more in aggregate marks. There are three subjects and marks are awarded out
    of 100 in each subject. The program should display an appropriate massage.*/
#include<stdio.h>
void main()
{
    int sub1,sub2,sub3;
    float per;
    printf("enter 3 subjects mark out of 100: ");
    scanf("%d",&sub1, &sub2, &sub3);
    per = (sub1 + sub2 + sub3) / 3.0;

    if (per  > 85)
    {
        printf("\n Honors");
    }
    else
    {
        printf("\n Not Honors");
    }
}

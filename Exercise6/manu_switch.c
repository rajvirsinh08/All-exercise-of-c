/*Write a program to input 2 numbers and perform arithmetic operation (+,-,*,/) as per the input chosen by user.*/
#include<stdio.h>
void main()
{
    int n1,n2,total,c;
    printf("\n enter 2 number for perform operatins : ");
    scanf("%d %d",&n1, &n2);
    printf("\n 1. Add");
    printf("\n 2. Sub");
    printf("\n 3. Mul");
    printf("\n 4. Div");
    printf("\n 5. Exit");
    printf("\n enter your choice : ");
    scanf("%d",c);
    switch(c)
    {
        case 1:
            total = n1 + n2;
            printf("\n Sum %d",total);
            break;
        case 2:
            total = n1 - n2;
            printf("\n Sub %d",total);
            break;
        case 3:
            total = n1 * n2;
            printf("\n Mul %d",total);
            break;
        case 4:
            total = n1 / n2;
            printf("\n Div %d,",total);
            break;
        case 5:
            printf("\n byeeee");
            break;
        default:
            printf("\n invalid choice");

    }
}

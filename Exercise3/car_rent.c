/*A car rental agency charges Rs 2000/- per week for a rented car. If the number of weeks is more than 5, the agency offers a
discount of Rs 500/- per week from the sixth week onwards. Write a flowchart program which will take the number of weeks as
input and will display the total rent payable by the customer.*/
#include<stdio.h>
void main()
{
    int weeks, amount;
    printf("\n please enter number of weeks");
    scanf("%d",&weeks);

    if(weeks<=5)
    {
        amount = weeks * 2000;
    }
    else
    {
        /*Else (weeks > 5):
        First 5 weeks = 5 * 2000 = 10000
        Remaining weeks = (weeks - 5) * (2000 - 500)
        Rent = 10000 + (weeks - 5) * 1500*/

        amount = (5 * 2000 ) + (weeks - 5 ) * 1500;
    }
    printf("\n Total payable amount is %d",amount);
}

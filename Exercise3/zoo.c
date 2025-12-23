/*A zoo offers discount for bulk purchase of entry tickets. If the number of tickets purchased is less than 10 the price per ticket is
 5. If the number of tickets purchased is more than 10 the price per ticket is 4. Write a program for displaying the amount payable
  by a person for the tickets purchased by him.*/
#include<stdio.h>
void main()
{
    int ticket,amount;
    printf("\n if u can purchase more then 10 tickets then you get per ticket at rs.4 ");
    printf("\n enter number of ticket :");
    scanf("%d",&ticket);

    if(ticket>5)
    {
        amount = ticket * 4;
    }
    else
    {
        amount = ticket * 5;
    }
    printf("\n Amount is %d",amount);
}

/*Demonstrate the use of break and continue by using for loop to print values
	1,2,3	(Use break for 5 times iteration)
	1,2,4,5 (Use continue for third iteration)*/


#include<stdio.h>
void main()
{
    int i=1, n=5;

   do
   {
       printf("\t%d",i);
       if(i==4)
            continue;


       i++;

   }while(i<=n);
}

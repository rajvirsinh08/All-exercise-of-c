/*Print all even numbers between 150 to 100*/
#include<stdio.h>
void main()
{
    for (int a = 150; a>=100;a--)
    {
        if(a % 2 == 0)
        {
            printf("\n %d",a);
        }
    }
}

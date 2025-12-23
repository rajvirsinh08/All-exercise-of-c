/*Print following float numbers
	22.0
	22.25
	22.50
	22.75
	23.0
	23.25
	23.50*/
#include<stdio.h>
void main()
{
    for(float a = 22.0; a<=23.50;a = a+0.25)
    {
        printf("\n %f",a);
    }
}

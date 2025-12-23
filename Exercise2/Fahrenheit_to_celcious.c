/*. Write a flowchart program to input temperature in Fahrenheit and output the corresponding temperature in centigrade. The formula for conversion is as */
#include<stdio.h>
void main()
{
    float f, c;
    printf("please enter Fahrenheit: ");
    scanf("%f",&f);
    c = 5.0 / 9 * ( f - 32 );
    printf("temperature in centigrade is %f", c);
}

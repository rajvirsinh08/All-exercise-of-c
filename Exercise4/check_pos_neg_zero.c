 /*Write a program to input a number and check whether it is positive, negative, or zero.*/
 #include<stdio.h>
 void main()
 {
     int number;
     printf("Please enter a any number : ");
     scanf("%d",&number);

     if(number > 0)
     {
         printf("%d is a positive number",number);
     }
     else
     {
         if(number<0)
         {
             printf("%d is negative number",number);
         }
         else
         {
             printf("%d is a Zero");
         }
     }
 }

/*1. Write a program to demonstrate scope of local and global variables.*/
 #include<stdio.h>
 int n1=10;
 void main()
 {
     int n2=121;
     printf("Global Variable : %d \n",n1);
     printf("Local Variable : %d ",n2);
 }

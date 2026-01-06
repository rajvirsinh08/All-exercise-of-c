#include<stdio.h>
int gcde(int n1,int n2){
	if(n2==0){
		return n1;
	}
	else{


	       return gcde(n2,n1%n2);
	}
}

void main(){
	int n1,n2,res;

	clrscr();

	printf("Enter n1 and n2:");
	scanf("%d%d",&n1,&n2);

	res=gcde(n1,n2);

	printf("Answer is:%d",res);
	getch();
}
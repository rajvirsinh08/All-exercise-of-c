#include<stdio.h>
void main(){
	int n1,f,i;
	f=0;
	clrscr();
	printf("ENter number:");
	scanf("%d",&n1);

	for(i=2;i<n1;i++){
		if(n1%i==0){
			f=1;
		}
	}
	if(f==1){
		printf("not prime");
	}
	else{
		printf("Prime");
	}
	getch();
}
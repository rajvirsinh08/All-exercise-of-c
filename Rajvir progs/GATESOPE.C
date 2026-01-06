#include<stdio.h>
void main(){
	int a,b,ch;

	while(ch!=5){
		printf("1.AND\t2.OR\t3.XOR\t4.NOT\n");

		printf("Enter choice:");
		scanf("%d",&ch);

		switch(ch){
			case 1:
				printf("A B | A AND B\n");

				for(a=0;a<=1;a++){
					for(b=0;b<=1;b++){
						printf("%d %d | %d\n",a,b,a&&b);
					}


				}
				break;
			case 2:
				printf("A  B | A OR B\n");

				for(a=0;a<=1;a++){
					for(b=0;b<=1;b++){
						printf("%d  %d | %d\n",a,b,a||b);
					}

				}
				break;
			case 3:
				printf("A  B | A XOR B\n");

				for(a=0;a<=1;a++){
					for(b=0;b<=1;b++){
						printf("%d  %d | %d\n",a,b,a^b);
					}


				}
				break;
			case 4:
				printf("A | NOT A\n");
				for(a=0;a<=1;a++){
					printf("%d | %d\n",a,!a);
				}
		}
	}
}
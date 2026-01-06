#include<stdio.h>
void main(){
	int a[20],b[20],n1,n2,i,j,ch,f;
	clrscr();

	printf("\nEnter no of elements in Set A:");
	scanf("%d",&n1);

	for(i=0;i<n1;i++){
		printf("\nEnter element %d in set A:",i+1);
		scanf("%d",&a[i]);
	}

	printf("\nEnter no of elements in Set B:");
	scanf("%d",&n2);

	for(i=0;i<n2;i++){
		printf("\nEnter element %d in set B:",i+1);
		scanf("%d",&b[i]);
	}

	printf("\nSet A: ");
	for(i=0;i<n1;i++){
		printf("%d\t",a[i]);
	}
	printf("\nSet B: ");
	for(i=0;i<n2;i++){

		printf("%d\t",b[i]);
	}

	while(ch!=9){
		printf("\n1.Union\t2.Intersection\t3.A-B4.B-A\t5.B subset of A \t6.A subset of B 9.EXIT \n");

		printf("Enter choice:\n");
		scanf("%d",&ch);

		switch(ch){
			case 1:
				for(i=0;i<n1;i++){
					printf("%d\t",a[i]);
				}

				for(i=0;i<n2;i++){
					f=0;
					for(j=0;j<n1;j++){
						if(b[i]==a[j]){
							f=1;
						}
					}
					if(f==0){
						printf("%d\t",b[i]);
					}
				}
				break;
			case 2:
				for(i=0;i<n1;i++){
					for(j=0;j<n2;j++){
						if(a[i]==b[j]){
							printf("%d\t",b[j]);
						}
					}
				}
				break;
			case 3:
				for(i=0;i<n1;i++){
					f=0;
					for(j=0;j<n2;j++){
						if(a[i]==b[j]){
							f=1;
						}
					}
					if(f==0){
						printf("%d\t",a[i]);
					}
				}
			case 4:
				for(i=0;i<n2;i++){
					f=0;
					for(j=0;j<n1;j++){
						if(a[j]==b[i]){
							f=1;
						}
					}
					if(f==0){
						printf("%d\t",b[i]);
					}
				}
			case 5:
				for(i=0;i<n2;i++){
					f=0;
					for(j=0;j<n1;j++){
						if(b[i]==a[j]){
							f=1;
						}
					}
					if(f==0){
						break;
					}


				}
				if(f==1){
					printf("B is subset of A.");

				}
				else{
					printf("no, B is not subset of A");
				}



				break;
			case 6:
				for(i=0;i<n1;i++){
					f=0;
					for(j=0;j<n2;j++){
						if(a[i]==b[j]){
							f=1;
						}
					}
					if(f==0){
						break;
					}
				}
				if(f==1){
					printf("A is a subset of B");
				}
				else{
					printf("No ,A is not subset of B");
				}
				break;
			case 9:
				break;





		}
	}

	getch();
}
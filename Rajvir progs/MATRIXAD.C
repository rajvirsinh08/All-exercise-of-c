#include<stdio.h>
void main(){
	int a[50][50],b[50][50],i,j,k,r1,c1,r2,c2,sum[100][100],isequal=1,scalar;
	int sc[100][100],mul[100][100];


	clrscr();
	printf("Enter rows and columns for matrix A:\n");
	scanf("%d%d",&r1,&c1);

	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			printf("\nEnter value a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}

	printf("Enter rows and columns for matrix B:\n");
	scanf("%d%d",&r2,&c2);

	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			printf("\nEnter value a[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}
	}

	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			printf("%d  ",b[i][j]);
		}
		printf("\n");
	}

	printf("\nAddition of matrix A and B:\n");

	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			sum[i][j]=a[i][j]+b[i][j];
		}

	}

	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			printf("%d  ",sum[i][j]);
		}
		printf("\n");
	}

	if(r1==r2 && c1==c2){
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++){
				if(a[i][j]!=b[i][j]){
					isequal=0;
					break;
				}
			}
			if(isequal==0){
				break;
			}
		}
	}

	if(isequal==1){
		printf("Both matrix are same\n");
	}
	else{
		printf("Both matrix are not same");
	}

	printf("Enter value for scalar at only matrix A:");
	scanf("%d",&scalar);

	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			sc[i][j]=scalar*a[i][j];
		}
	}
	printf("Scalar mattrix:\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			printf("%d  ",sc[i][j]);
		}
		printf("\n");
	}

	printf("Multiplication of A and B:\n");

	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			for(k=0;k<c1;k++){
				mul[i][j]+=a[i][k]*b[k][j];
			}
		}
	}

	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			printf("%d  ",mul[i][j]);
		}
		printf("\n");
	}
	getch();

}
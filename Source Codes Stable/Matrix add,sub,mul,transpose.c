#include <stdio.h>

void main() {
	int i, j, r1, c1, r2, c2;
	printf("Enter the number of rows for 1st matrix \n");
	scanf("%d", &r1);
	printf("Enter the number of columns for 1st matrix \n");
	scanf("%d", &c1);
	int a[r1][c1];
	for (i=0; i<r1; i++) {
		for (j=0; j<c1; j++) {
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the number of rows for 2nd matrix \n");
	scanf("%d", &r2);
	printf("Enter the number of columns for 2nd matrix \n");
	scanf("%d", &c2);
	int b[r2][c2];
	for (i=0; i<r2; i++) {
		for (j=0; j<c2; j++) {
			scanf("%d", &b[i][j]);
		}
	}
	int c[r1][c1];
	if (r1==r2 && c1==c2) {
		for (i=0; i<r1; i++) {
			for(j=0;j<c1;j++)
			{
				c[i][j]=a[i][j]+b[i][j];
			}
		}
		printf("The addition of the matrices are \n");
		for (i=0; i<r1; i++) {
			for (j=0; j<c1; j++) {
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
	}
	else {
		printf("Dimensions are wrong! \n");
	}
	
	int d[r1][c1];
	if (r1==r2 && c1==c2) {
		for(i=0;i<r1;i++) {
			for(j=0;j<c1;j++) {
				d[i][j]=a[i][j]-b[i][j];
			}
		}
		printf("\nThe subtraction of the matrices are \n");
		for(i=0;i<r1;i++) {
			for(j=0;j<c1;j++) {
				printf("%d\t",d[i][j]);
			}
			printf("\n");
		}
	}
	else {
		printf("Dimensions are wrong! \n");
	}
	int m[r1][c2];
	int k;
	if (c1==r2) {
		for(i=0;i<r1;i++) {
			for(j=0;j<c2;j++) {
				for(k=0;k<c1;k++) {
					m[i][j]=0;
					m[i][j]=m[i][j]+(a[i][k]*b[k][j]);
				}
			}
		}
		printf("\nThe multiplication of the matrices are \n");
		for (i=0; i<r1; i++) {
			for(j=0; j<c2; j++) {
				printf("%d\t",m[i][j]);
			}
			printf("\n");
		}
	}
	else {
		printf("Matrix multiplication is not possible\n");
	}
	int at[r1][c1];
	if (r1==c1) {
		for (i=0; i<r1; i++) {
			for (j=0; j<c1; j++) {
				at[j][i] = a[i][j];
			}
		}
		printf("The transpose of A is \n");
		for (i=0; i<r1; i++) {
			for (j=0; j<c1; j++) {
				printf("%d\t",at[i][j]);
			}
			printf("\n");
		}
	}
	else {
		printf("The transpose of A is not possible \n");
	}
	int bt[r2][c2];
	if (r2==c2) {
		for (i=0;i<r2;i++) {
			for(j=0;j<c2;j++) {
				bt[j][i]=b[i][j];
			}
		}
		printf("The transpose of B is \n");
		for(i=0;i<r2;i++) {
			for(j=0;j<c2;j++) {
				printf("%d\t",bt[i][j]);
			}
			printf("\n");
		}
	}
	else {
		printf("The transpose of B is not possible.\n");
	}
}

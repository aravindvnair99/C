/* To find the sum of the diagonal elements of a matrix */

#include <stdio.h>
	void main() {
		int r, c, sum = 0;
		printf("Enter the number of rows:\n");
		scanf("%d", &r);
		printf("Enter the number of columns:\n");
		scanf("%d", &c);
		int a[r][c], i, j;
		printf("Enter the array elements:\n");
		for (i = 0; i < r; i++) {
			for (j = 0; j < c; j++) {
				printf("Enter the array element for %d, %d:\n", i, j);
				scanf("%d", &a[i][j]);
			}
		}
		printf("The array is:\n");
		for (i = 0; i < r; i++) {
			for (j = 0; j < c; j++) {
				printf("%d\t", a[i][j]);
			}
			printf("\n");
		}
		if(r == c){
			for(i=0;i<r;i++){
				for(j=0;j<c;j++){
					if(i==j){
						sum+=a[i][j];
					}
				}
			}
			printf("The sum is %d",sum);
		}
		else{
			printf("It is not a square matrix");
		}
   }

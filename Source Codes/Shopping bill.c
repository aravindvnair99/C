#include <stdio.h>
void main()
{
	int q, q1, ta, ta1;
	char i[20], n[20], i1[20];
	printf("Enter the customer name \n");
	scanf("%10s", n);
	printf("Enter the item name \n");
	scanf("%10s", i);
	printf("Enter the quantity \n");
	scanf("%d", &q);
	ta = 10 * q;
	printf("Enter the item name \n");
	scanf("%10s", i1);
	printf("Enter the quantity \n");
	scanf("%d", &q1);
	ta1 = 20 * q;
	printf("\t\t Aishwarya Shopping\n");
	printf("Bill Number:123 \t\t\t Customer name:%s \n", n);
	printf("Item Name: \t Unit Price: \t Quantity: \t Total Amount: \n");
	printf("%s \t\t 10 \t\t %d \t\t %d \n", i, q, ta);
	printf("%s \t\t 20 \t\t %d \t\t %d \n", i1, q1, ta1);
}

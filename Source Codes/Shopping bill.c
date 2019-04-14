#include <stdio.h>
void main()
{
	int q, q1, ta, ta1;
	char i[10], n[10], i1[10];
	printf("Enter the customer name \n");
	scanf("%s", &n);
	printf("Enter the item name \n");
	scanf("%s", &i);
	printf("Enter the quantity \n");
	scanf("%d", &q);
	ta = 10 * q;
	printf("Enter the item name \n");
	scanf("%s", &i1);
	printf("Enter the quantity \n");
	scanf("%d", &q1);
	ta1 = 20 * q;
	printf("\t\t Aishwarya Shopping\n");
	printf("Bill Number:123 \t\t\t Customer name:%s \n", n);
	printf("Item Name: \t Unit Price: \t Quantity: \t Total Amount: \n");
	printf("%s \t 10 \t %d \t %d \n", i, q, ta);
	printf("%s \t 20 \t %d \t %d \n", i1, q1, ta1);
}

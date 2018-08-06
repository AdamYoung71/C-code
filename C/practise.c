#include<stdio.h>

int main()
{
	int amount, n20, n10, n5, n1;
	scanf("%d", &amount);
	n20 = amount / 20;
	n10 = (amount - n20 * 20) / 10;
	n5 = (amount - n20 * 20 - n10 * 10) / 5;
	n1 = (amount - n20 * 20 - n10 * 10 - n5 * 5);
	printf("%d\n", n20);
	printf("%d\n", n10);
	printf("%d\n", n5);
	printf("%d\n", n1);
	/*printf("$20 is :%d\n$10 is :%d\n$5 is :%d\n$1 is :%d\n", (n20, n10, n5, n1));*/
	
	return 0;
}

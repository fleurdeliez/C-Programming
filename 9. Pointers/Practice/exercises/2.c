#include <stdio.h>

int main() {
	int n1, n2, n3;
	int *n1p = &n1, *n2p = &n2, *n3p = &n3;
	int sum;

	printf("Input the first number: ");
	scanf("%d", &n1);
	printf("Input the second number: ");
	scanf("%d", &n2);
	printf("Input the third number: ");
	scanf("%d", &n3);

	sum = *n1p + *n2p + *n3p;

	printf("The sum of the entered numbers is: %d", sum);	
	
	return 0;
}
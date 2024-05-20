#include <stdio.h>

int main()
{
	int x[10] = {50, 2, 89, 4, 76, 6, 7, 80, 9, 10};
	int i;		
	
	
	for (i = 0; i <= 9; ++i)
		printf("\ni = %5d  x[i] = %5d  *(x + i)=%5d  &x[i] = %5d  (x + i) = %5d", 
		i, x[i], *(x + i), &x[i], (x + i));
}
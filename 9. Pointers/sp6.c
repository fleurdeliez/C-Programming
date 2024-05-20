#include <stdio.h>

int main()
{
	int *px, *py, *pa;
	int a[6] = {1, 2, 3, 4, 5, 6};
	int pz;			//normal/standard variable type int
	px = &a[1];
	py = &a[4];
	
	pz = py-px;
	pa = &a[pz];
	
	printf("Value of *px = %d\n", *px);		//value of a[1] = 2
	printf("Value of *py = %d\n\n",*py);	//value of a[4] = 5
	
	printf("Value of px = %d\n",px);		//address of a[1] - referenced index
	printf("Value of py = %d\n\n",py);		//address of a[4] - referenced index
	
	printf("Value of &a[1] = %d\n",&a[1]);	// direct access to the address of a[1]
	printf("Value of &a[4] = %d\n\n",&a[4]);	// dirrect access to the address of a[4]
	
	printf("Value of py-px = %d\n", pz);		//3
	printf("Value of *pa = %d", *pa);			//4
}
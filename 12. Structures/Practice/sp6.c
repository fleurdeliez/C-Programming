#include<stdio.h>

struct record
{
	char name[50];
	int age;
};

void fpass(struct record *recX);

int main()
{
	struct record recY = {"Arnie", 23};
	printf("In main, Before: \n");
	printf("%s %d\n", recY.name,recY.age);
	
	fpass(&recY);
	
	printf("\nIn main, After: \n");
	printf("%s %d\n", recY.name,recY.age);
}

void fpass(struct record *recX)
{
	printf("\nIn fpass: \n");
	recX->age += 3;
	printf("%s %d\n", recX->name,recX->age);
	
	
}
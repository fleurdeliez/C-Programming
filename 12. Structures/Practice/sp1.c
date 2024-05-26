#include<stdio.h>
#include <conio.h>


int main()
{
	char a;
	
	struct record{
		char fullName[50];
		int age;
	}student1, student2;
	
	printf("Enter the full name of student1: ");
	gets(student1.fullName);
	printf("Enter the age of student1: ");
	scanf("%d", &student1.age);
	printf("%s is %d years old.\n", student1.fullName, student1.age);
	
	scanf("%c", &a);

	printf("\nEnter the full name of student2: ");
	gets(student2.fullName);
	printf("Enter the age of student2: ");
	scanf("%d", &student2.age);
	printf("%s is %d years old.", student2.fullName, student2.age);
	
}
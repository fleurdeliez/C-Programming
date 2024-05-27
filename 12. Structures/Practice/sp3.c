#include <stdio.h>


int main(){
	char a;
	int i;
	struct book{
		char name[50];
		int age;
	}buddies[5];			//declaration of array of struct variable buddies with 5 elements
	
	for(i=0; i<5; i++)
	{
		printf("\nEnter student%d name: ", i+1);
		gets(buddies[i].name);
		printf("Enter student%d age: ", i+1);
		scanf("%d", &buddies[i].age);
		scanf("%c", &a);
		printf("\n");
	}

	for(i=0; i<5; i++)
	{
		printf("%s is %d years old.\n", buddies[i].name, buddies[i].age);
	}
}
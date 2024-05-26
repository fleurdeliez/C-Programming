#include <stdio.h>

int main(){
	char a;
	
	struct book{
		char title[50], author[50];
		float price;
	}library1, library2;
	
	printf("Please enter the book title:\t");
	gets(library1.title);
	printf("Please enter the author's name:\t");
	gets(library1.author);
	printf("Enter the price of the book:\t");
	scanf("%f", &library1.price);
	printf("%s by %s is: %.2fphp", library1.title, library1.author, library1.price);
	
}
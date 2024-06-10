#include<stdio.h>

struct record{			//global template/definition of structure record
	char name[50];
	int age;
}agrec;

void function(struct record);	//function prototype/function declaration

int main(){
printf("Enter student age: ");
scanf("%d", &agrec.age);
function(agrec);						//function call passing structure argrec - Actual Parameter
}

void function(struct record sample)		//function definition	- Formal Parameter
{
	printf("Student age is %d",sample.age);
}
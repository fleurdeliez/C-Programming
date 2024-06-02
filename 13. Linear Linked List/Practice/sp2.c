#include <stdio.h>

//Structure Template
struct entry{		
	int value;		
	struct entry *next;
};

int main(){
	struct entry n1, n2, n3;
	
	n1.value = 100;
	n2.value = 200;
	n3.value = 300;
	
	n1.next = &n2;		//assign address of n2 to n1.next
	n2.next = &n3;		//assign address of n3 to n2.next
	n3.next = NULL;
	
	int i = n1.next->value;		//assing the value of n2.value to variable i
	printf("Value of i is %d.", i);
	
	printf("\n\nValue of n2.next->value is %d", n2.next->value);
	
	n1.next = n2.next;
	printf("\n%d", n1.next->value);
	
	struct entry n2_3;
	n2_3.value = 400;
	n2_3.next = n2.next;
	n2.next = &n2_3;
	
	printf("\n%d", n2_3.value);
	printf("\n%d", n2_3.next->value);
	printf("\n%d", n2.next->value);
}
#include <stdio.h>
#define ROWS 3
#define COLS 3
int main(){

	int matrix[ROWS][COLS];				//Declaration
	int i, j;

	//Input Array Elements
	printf("Enter %d x %d matrix elements:\n", ROWS, COLS);
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			scanf("%d", &matrix[i][j]);		
										
		}									 
	}	
	
	printf("\nYou Entered:\n");
	for (i = 0; i < ROWS; i++){
		for (j = 0; j < COLS; j++){
			printf("matrix[%d][%d] = %d\t",i,j, matrix[i][j]);
		}
		printf("\n");
	}

}
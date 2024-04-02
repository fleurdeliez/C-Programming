#include <stdio.h>

int main()
{
    int Numbers[] = {1,2,3,4,5,6,7,8,9,10};
    int sum = 0;

    printf("The even numbers in the array are: \n");

    for (int i = 0; i < sizeof(Numbers)/sizeof(Numbers[i]); ++i) {
        if(Numbers[i] % 2 == 0){
                printf("%d ", Numbers[i]);
                sum += Numbers[i];
        }
    }

    printf("\nThe sum of the even numbers in the array is: %d\n", sum);

    return 0;
}
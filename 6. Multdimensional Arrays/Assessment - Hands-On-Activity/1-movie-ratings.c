#include <stdio.h>

int main() {

    int n, r; //n represents the number of movies; r represents the number of ratings per movie

    printf("Enter the number of movies: ");
    scanf("%d", &n);
    printf("Enter the number of ratings per movie: ");
    scanf("%d", &r);

    int mRatings[n][r];

    //input the ratings per movie
    for (int i = 0; i < n; ++i) {
        printf("\nMovie %d\n", i + 1);
        for (int j = 0; j < r; ++j) {
            printf("Enter rating %d: ", j + 1);
            scanf("%d", &mRatings[i][j]);
        }
    }

    //display the movie ratings
   for (int i = 0; i < n; ++i) {
        printf("\nMovie %d\n", i + 1);
        for (int j = 0; j < r; ++j) {
            printf("%d ", &mRatings[i][j]);
        }
        printf("\n");
    }

    //calculate and display the average ratings
    printf("\nAverage ratings:\n");
    for (int i = 0; i < n; ++i) {
        double sum = 0.0;
        for (int j = 0; j < r; ++j) {
            sum += mRatings[i][j];
        }
        double average = sum / r;
        printf("Movie %d: %.2lf\n", i + 1, average);
    }

    return 0;
}

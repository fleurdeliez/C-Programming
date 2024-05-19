// 5.19.24

#include <stdio.h>

int main() {
    int movie;
    printf("Enter the number of movies: ");
    scanf("%d", &movie);
    
    int ratings;
    printf("Enter the number of ratings per movie: ");
    scanf("%d", &ratings);

    int movieRatings[movie][ratings];
    for (int i = 0; i < movie; i++) {
        printf("\nMovie %d:\n", i + 1);
        for (int j = 0; j < ratings; j++) {
            printf("Enter rating %d: ", j + 1);
            scanf("%d", &movieRatings[i][j]);            
        }
        printf("\n");
    }

    printf("Movie ratings:\n");
    for (int i = 0; i < movie; i++) {
        printf("Movie %d: ", i + 1);
        for (int j = 0; j < ratings; j++) {
            printf("%d ", movieRatings[i][j]);
        }
        printf("\n");
    }

    printf("\nAverage ratings:\n");
    for (int i = 0; i < movie; i++) {
        double sum = 0.0;
        for (int j = 0; j < ratings; j++) {
            sum += movieRatings[i][j];
        }
        double average = sum / ratings;
        printf("Movie %d: %.2lf\n", i + 1, average);
    }

    return 0;
}
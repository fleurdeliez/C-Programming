// 5.18.24

#include <stdio.h>

int main() {
    int nStuds;
    printf("Enter the number of students: ");
    scanf("%d", &nStuds);

    int nSubs;
    printf("Enter the number of students: ");
    scanf("%d", &nSubs);

    int grade[nStuds][nStuds];
    for (int i = 0; i < nStuds; i++) {
        printf("\nStudent %d:\n", i + 1);
        for (int j = 0; j < nSubs; j++) {
            printf("Enter grade for subject %d: ", j+1);
            scanf("%d", &grade[i][j]);            
        }
    }

    printf("\nStudent Grades:");
    for (int i = 0; i < nStuds; i++) {
        printf("\nStudent %d: ", i+1);
        for (int j = 0; j < nSubs; j++) {
            printf("%d ", grade[i][j]);       
        }
    }
    
    printf("\n\nAverage grades:\n");
    for (int i = 0; i < nStuds; i++) {
        double sum = 0.0;
        for (int j = 0; j < nSubs; j++) {
            sum += grade[i][j];
        }
        double ave = sum / nSubs;
        printf("Student %d: %.2lf\n", i+1, ave);
    }
    
    return 0;
}
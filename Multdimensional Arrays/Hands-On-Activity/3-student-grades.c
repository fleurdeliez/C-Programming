
#include <stdio.h>

#define MAX_STUDENTS 100
#define MAX_SUBJECTS 100

int main() {
    int numStudents, numSubjects;
    int grades[MAX_STUDENTS][MAX_SUBJECTS];
    float averageGrades[MAX_STUDENTS] = {0};

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    printf("Enter the number of subjects: ");
    scanf("%d", &numSubjects);

    for (int i = 0; i < numStudents; i++) {
        printf("\nStudent %d:\n", i + 1);
        for (int j = 0; j < numSubjects; j++) {
            printf("Enter grade for subject %d: ", j + 1);
            scanf("%d", &grades[i][j]);
            averageGrades[i] += grades[i][j];
        }
        averageGrades[i] /= numSubjects;
    }

    printf("\nStudent grades:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d: ", i + 1);
        for (int j = 0; j < numSubjects; j++) {
            printf("%d ", grades[i][j]);
        }
        printf("\n");
    }

    printf("\nAverage grades:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d: %.2f\n", i + 1, averageGrades[i]);
    }

    return 0;
}
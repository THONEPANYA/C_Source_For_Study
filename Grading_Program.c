// Translator for Project

#include <stdio.h>

char calculate_grade(int points) {
    char grade;
    if (points >= 80) {
        grade = 'A';
    }
    else if (points >= 70 && points < 80) {
        grade = 'B';
    }
    else if (points >= 60 && points < 70) {
        grade = 'C';
    }
    else if (points >= 50 && points <= 60) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }
    return grade;
}

int main() {
    char name[50];
    int points;
    printf("Enter name: ");
    scanf_s("%s", name, sizeof(name)); // Using scanf_s for input of name
    printf("Enter points: ");
    scanf_s("%d", &points); // Using scanf_s for input of points

    char grade = calculate_grade(points);
    printf("%s's grade is %c\n", name, grade);

    return 0;
}

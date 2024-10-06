#include <stdio.h>

int main() {
    // Variable declarations
    int roll_no;
    char name[50];
    float marks[3];
    float total, percentage;
    char division[10];

    // Input roll number and name
    printf("Enter Roll Number: ");
    scanf("%d", &roll_no);
    printf("Enter Name: ");
    scanf(" %[^\n]", name); // This allows for spaces in the name

    // Input marks for three subjects
    printf("Enter marks for Maths: ");
    scanf("%f", &marks[0]);
    printf("Enter marks for Physics: ");
    scanf("%f", &marks[1]);
    printf("Enter marks for Chemistry: ");
    scanf("%f", &marks[2]);

    // Calculate total marks
    total = marks[0] + marks[1] + marks[2];

    // Calculate percentage
    percentage = total / 3; // Assuming each subject is out of 100

    // Determine division based on percentage
    if (percentage >= 60) {
        strcpy(division, "First");
    } else if (percentage >= 50) {
        strcpy(division, "Second");
    } else if (percentage >= 40) {
        strcpy(division, "Third");
    } else {
        strcpy(division, "Fail");
    }

    // Display results
    printf("\n--- Student Result ---\n");
    printf("Roll Number: %d\n", roll_no);
    printf("Name: %s\n", name);
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Division: %s\n", division);

    return 0;
}


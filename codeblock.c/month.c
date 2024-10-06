#include <stdio.h>

int main() {
    int month;

    // Prompt user for input
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    // Array of month names
    const char *months[] = {
        "Invalid month", // Placeholder for index 0
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };

    // Check if the month is valid
    if (month >= 1 && month <= 12) {
        // Print the corresponding month name
        printf("Month: %s\n", months[month]);
    } else {
        // Print an error message for invalid month
        printf("Error: Please enter a valid month number (1-12).\n");
    }

    return 0;
}


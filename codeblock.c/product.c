#include <stdio.h>

int main() {
    // Declare variables to store the two numbers and their product
    float num1, num2, product;

    // Prompt the user for input
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Calculate the product
    product = num1 * num2;

    // Display the result
    printf("The product of %.2f and %.2f is %.2f\n", num1, num2, product);

    return 0;
}

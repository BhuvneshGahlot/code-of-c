#include <stdio.h>

int main() {

    int num1,num2,product;

    printf("enter two no:");
    scanf("%d %d",&num1,&num2);

    product = num1 * num2;

    printf("product of %d and %d is : %d\n", num1, num2, product);

    return 0;
}

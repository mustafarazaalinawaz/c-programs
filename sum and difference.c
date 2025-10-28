#include <stdio.h>

int main() {
    int num1, num2, sum, difference;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    difference = num1 - num2;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);

    return 0;
} 
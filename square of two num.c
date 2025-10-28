#include <stdio.h>
#include <math.h>

int main() {
    double number, square_root;

    printf("Enter a number: ");
    scanf("%lf", &number);

    if (number >= 0) {
        square_root = sqrt(number);
        printf("Square root of %.2lf is %.2lf\n", number, square_root);
    } else {
        printf("Cannot calculate square root of a negative number.\n");
    }

    return 0;
} 

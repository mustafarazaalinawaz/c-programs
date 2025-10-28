#include <stdio.h>
#define PI 3.14159

int main() {
    float radius;

    // Area of Circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("Area of Circle = %.2f\n", PI * radius * radius);
    return 0;
}

#include <stdio.h>

int main() {
    int sub1, sub2, sub3, sub4, sub5, total;
    float average;

    printf("Enter marks for 5 subjects (integers): ");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    average = (float)total / 5.0;

    printf("\nTotal marks: %d\n", total);
    printf("Average marks: %.2f\n", average);

    return 0;
}//Take marks of 5 subjects in integers and he total in integer average in float//
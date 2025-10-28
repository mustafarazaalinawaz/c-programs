#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, simple_interest, compound_interest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time in years: ");
    scanf("%f", &time);

    // Simple Interest
    simple_interest = (principal * rate * time) / 100;
    printf("\nSimple Interest = %.2f\n", simple_interest);

    // Compound Interest
    compound_interest = principal * (pow((1 + rate / 100), time)) - principal;
    printf("Compound Interest = %.2f\n", compound_interest);

    return 0;
}
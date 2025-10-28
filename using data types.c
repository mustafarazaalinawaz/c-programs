#include <stdio.h>

int main() {
    int integer_val;
    float float_val;
    char char_val;
    char string_val[100];

    printf("Enter an integer: ");
    scanf("%d", &integer_val);

    printf("Enter a float: ");
    scanf("%f", &float_val);

    printf("Enter a character: ");
    scanf(" %c", &char_val); // Note the space before %c to consume newline character

    printf("Enter a string: ");
    scanf("%s", &string_val);

    printf("\nYou entered:\n");
    printf("Integer: %d\n", integer_val);
    printf("Float: %f\n", float_val);
    printf("Character: %c\n", char_val);
    printf("String: %s\n", string_val);

    return 0;
}

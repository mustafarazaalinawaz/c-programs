#include <iostream>
#include <cstdio>

int main()
{
    char op;
    int i, j;
    printf("enter the num (e.g.,2+3): ");
    scanf("%d %c %d", &i, &op, &j);
    switch (op)
    {
        case '+':
            printf("Result:%d\n", i+j);
            break;
        case '-':
            printf("Result:%d\n", i-j);
            break;
        case '*':
            printf("Result:%d\n", i*j);
            break;
        case '/':
            if(j != 0){
                printf("Result:%.2f\n", (float)i/j);
            } else {
                printf("division by zero error!\n");
            }
            break;
        default:
            printf("Invalid operator!\n");
            break;
    }
    return 0;
}
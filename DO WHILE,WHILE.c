#include<stdio.h>
int main() {
int i = 10;
printf("While Loop: \n");
while (i < 5) {
printf("i %d\n", i);
}
printf("Do While Loop: \n");
do {
printf("%d\n", i);
} while (i < 5);
return 0;
}

#include <stdio.h>
int main() {
int num, original, reversed, remainder;
printf("Enter an integer: ");
scanf("%d", &num);
  original = num;
while (num !=0) {

remainder = num % 10;
reversed= reversed*10+remainder;
num /=10;
}
if (original==reversed)
printf("Palindrome\n");
else
printf("Not a palindrome\n");
return 0;
}

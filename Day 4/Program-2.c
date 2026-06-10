#include <stdio.h>
int fibonacci(int n) {
int a = 0, b = 1, next, i;

if (n == 1)
return a;
if (n == 2)
return b;
for (i = 3; i <= n; i++) {
next = a + b;
a = b;
b = next;
}
return b;
}

int main() {
int n;
printf("Enter the value of n: ");
scanf("%d", &n);

printf("Nth Fibonacci term = %d", fibonacci(n));

return 0;
}
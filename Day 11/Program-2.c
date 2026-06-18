#include <stdio.h>
int findMax(int a, int b) {
if(a > b)
return a;
else
return b;
}
int main() {
int num1,num2,max;
printf("Enter two numbers: ");
scanf("%d %", &num1, &num2);
max = findMax(num1, num2);
printf("Maximum number is: %d", max);
return 0;
}
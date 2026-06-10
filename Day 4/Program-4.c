#include <stdio.h>
#include <math.h>

int main() {
int lower, upper, num, original, remainder, n;
double result;
printf("Enter lower and upper limit: ");
scanf("%d %d", &lower, &upper);
printf("Armstrong numbers between %d and %d are:\n", lower, upper);
for (num = lower; num <= upper; num++) {
original = num;
n = 0;
result = 0;
while (original != 0) {
original /= 10;
n++;
}
original = num;
while (original != 0) {
remainder = original % 10;
result += pow(remainder, n);
original /= 10;
}
if ((int)result == num) {
printf("%d ", num);
}
}

return 0;
}
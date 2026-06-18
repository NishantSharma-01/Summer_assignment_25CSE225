#include <stdio.h>

int isPerfect(int num) {
    int i, sum = 0;

    for(i = 1; i <= num/2; i++) {
        if(num % i == 0) {
            sum += i;
        }
    }

    if(sum == num)
        return 1;   
    else
        return 0;   
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(isPerfect(n))
        printf("Perfect Number");
    else
        printf("Not a Perfect Number");

    return 0;
}
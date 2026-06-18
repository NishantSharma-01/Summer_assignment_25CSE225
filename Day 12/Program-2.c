#include <stdio.h>

int isArmstrong(int num) {
    int original=num;
    int rem,sum=0;

    while(num > 0) {
        rem=num%10;
        sum=sum+(rem * rem * rem);
        num = num/10;
    }

    if(sum==original)
        return 1;
    else
        return 0;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(isArmstrong(n))
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}
#include <stdio.h>

int isPalindrome(int num) {
int original = num;
int reverse = 0, rem;
while(num != 0) {
rem = num % 10;
reverse = reverse * 10 + rem;
num = num / 10;
}
if(original == reverse)
return 1;  
else
return 0;  
}
int main() {
int n;
printf("Enter a number: ");
scanf("%d", &n);
if(isPalindrome(n))
printf("Palindrome number");
else
printf("Not a palindrome");
return 0;
}
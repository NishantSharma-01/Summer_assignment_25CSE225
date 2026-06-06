#include<stdio.h>
int main(){
int n,reverse=0, reminder, original;
printf("Enter the number:");
scanf("%d",&n);
original=n;
while(n != 0){
reminder=n%10;
reverse=reverse*10+reminder;
n= n/10;
}
if(original == reverse)
printf("Palindrome\n");
else
printf("Not Palindrome\n");
return 0;
}



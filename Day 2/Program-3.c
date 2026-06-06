#include<stdio.h>
int main(){
int n, product=1, reminder;
printf("Enter the number:");
scanf("%d",&n);
while(n != 0){
reminder=n%10;
product=product*reminder;
n=n/10;
}
printf("The product of digits is %d", product);
return 0;
}


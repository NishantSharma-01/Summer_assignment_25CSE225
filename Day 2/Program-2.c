#include<stdio.h>
int main(){
int n,reverse=0, reminder;
printf("Enter the number");
scanf("%d",&n);
while(n != 0){
reminder= n%10;
reverse=reverse*10+reminder;
n=n/10;
}
printf("The reverse number is %d",reverse);
return 0;
}

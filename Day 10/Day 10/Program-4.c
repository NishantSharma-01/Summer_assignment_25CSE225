#include <stdio.h>

int main() {
int i, j, k;
int n = 5;
for(i=1;i<=n;i++){
for(j=1;j<=n l-i;j++) {
printf(" ");
}
for(j=1;j<=i;j++){
printf("%c",'A'+j-1);
}
for(k=i-1;k>=1;k--){
printf("%c", 'A' + k - 1);
}
printf("\n");
}
return 0;
}
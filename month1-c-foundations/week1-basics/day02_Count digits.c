#include <stdio.h>
int n;
int c=0;
int main() {
    printf("Enter a number :");
    scanf("%d",&n);
    while(n!=0){
      n=n/10;
      c++;
    }
    printf("the no.of digits in given number is:%d",c);
    return 0;
}
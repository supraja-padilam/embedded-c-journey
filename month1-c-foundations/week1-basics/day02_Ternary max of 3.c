#include <stdio.h>
int a;
int b;
int c;
int m;
int main() {
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    printf("Enter value of c:");
    scanf("%d",&c);
    m = (a > b)?((a > c)? a:c):((b > c)?b:c);
    printf("the maximum of 3 numbers is %d",m);
    return 0;
}
#include <stdio.h>

int a,b,temp;
int main() {
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("%d is a value\n",a);
    printf("%d is b value\n",b);
    return 0;
}

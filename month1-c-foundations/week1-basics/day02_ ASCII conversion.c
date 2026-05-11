
#include <stdio.h>
int a;
char b;
int main() {
    printf("enter int value (0-127) for ASCII :");
    scanf("%d",&a);
    printf("ASCII value of integer %d is :%c\n",a,a);
    
    printf("Enter a character: ");
    scanf(" %c",&b);
    printf("Integer value of ASCII Value %c is :%d\n",b,b);
    
    return 0;
}
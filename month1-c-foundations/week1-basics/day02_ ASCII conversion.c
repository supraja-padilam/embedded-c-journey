// Online C compiler to run C program online
#include <stdio.h>
int a;
char b;
int main() {
    // Write C code here
    printf("enter int value (0-127) for ASCII :");
    scanf("%d",&a);
    
    printf("ASCII value of integer is :%c\n",a);
    
    printf("Enter a character: ");
    
    scanf(" %c",&b);
    
    printf("Integer value of ASCII Value is :%d\n",b);
    
    return 0;
}
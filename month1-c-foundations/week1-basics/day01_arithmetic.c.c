#include <stdio.h>

int a;
int b;
char c;

int main() {
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &c); 
    
    if(c == '+') 
        printf("addition of a and b is %d\n", a+b);
    else if(c == '-') 
        printf("subtraction of a and b is %d\n", a-b);
    else if(c == '*')
        printf("multiplication of a and b is %d\n", a*b);
    else if(c == '/')
        printf("division of a and b is %d\n", a/b);
    else
        printf("invalid choice please choose among (+,-,*,/)\n");

    return 0;
}

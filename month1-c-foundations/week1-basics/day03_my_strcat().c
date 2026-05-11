// Practice Program: String Concatenation without string.h
// Completed on May 11, 2026
void my_strcat(char *dest, char *src) {

    while (*dest != '\0') {
        dest++;
    }

    while (*src!= '\0') {
        *dest = *src;
       dest++;
       src++;
    }

    *dest= '\0'; 
}

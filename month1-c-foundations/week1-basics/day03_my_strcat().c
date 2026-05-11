// Practice Program: String Concatenation without string.h
// Completed on May 11, 2026
void my_strcat(char dest[], char src[]) {
    int i = 0, j = 0;

    while (dest[i] != '\0') {
        i++;
    }

    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0'; 
}
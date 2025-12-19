#include <stdio.h>


int strLength(char *str) {
    int length = 0;

    while (*str != '\0') {
        length++;
        str++;   
    }

    return length;
}

int main() {
    char str[50];

    printf("Enter any str: ");
    fgets(str, sizeof(str), stdin);

    int length = strLength(str);

    printf("The length of a str is: %d\n", length);

    return 0;
}

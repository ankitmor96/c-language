#include <stdio.h>

int main() {
    int num, lastDigit, firstDigit;

    printf("Enter any number: ");
    scanf("%d", &num);

    lastDigit = num % 10;  

    
    while (num >= 10) {
        num = num / 10;     
    }
    firstDigit = num;       

    int sum = firstDigit + lastDigit;

    printf("Sum of First and Last Digit = %d\n", sum);

    return 0;
}
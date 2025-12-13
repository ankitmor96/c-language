📘 C Programming – Loop, String & Number Programs

This repository contains basic C programs that demonstrate the use of
loops, string functions, and number logic.
Each program is beginner-friendly and helps build strong fundamentals.

🧩 Program 1: Alphabet Skipper (do-while Loop)
🔹 Description

This program prints alphabets starting from 'd', skipping 4 letters each time, using a do-while loop.

🔹 Source Code
#include <stdio.h>

int main(){
    char letter = 'd';

    do{
        printf("%c ", letter);
        letter = letter + 4;
    } while(letter <= 'z');

    return 0;
}

🔹 Input
No user input

🔹 Output
d h l p t x

🧩 Program 2: String Length Using strlen()
🔹 Description

This program finds the length of a string using the built-in strlen() function.

🔹 Source Code
#include <stdio.h>
#include <string.h>

int main(){
    char syntax[] = "1234";

    int syntaxLength = strlen(syntax);
    printf("%d\n", syntaxLength);

    return 0;
}

🔹 Input
No user input

🔹 Output
4

🧩 Program 3: Sum of First and Last Digit of a Number
🔹 Description

This program accepts a number from the user and calculates the sum of its first and last digits using a loop.

🔹 Source Code
#include <stdio.h>

int main(){
    int num, lastDigit, firstDigit;

    printf("Enter any number: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    while(num >= 10){
        num = num / 10;
    }

    firstDigit = num;

    int sum = firstDigit + lastDigit;

    printf("Sum of First and Last Digit = %d\n", sum);

    return 0;
}

🔹 Input
Enter any number: 4567

🔹 Output
Sum of First and Last Digit = 11


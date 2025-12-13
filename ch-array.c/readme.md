📘 C Array Programs – README

This repository contains basic C programs on arrays, covering initialization, user input, accessing elements, updating values, looping, and deletion logic.

🔹 1). Static Array Initialization & Access Element
📌 Description

This program demonstrates static array initialization and prints a specific array element using index.

💻 Source Code
#include <stdio.h>

int main() {
    int num[5] = {2,4,6,8,5};
    int number[5] = {};

    number[0] = 2;
    number[1] = 4;
    number[2] = 6;
    number[3] = 8;
    number[4] = 5;

    printf("%d", number[2]);
    return 0;
}

🧾 Input
Array = {2, 4, 6, 8, 5}

📤 Output
6

🔹 2). Array Input from User
📌 Description

This program takes 5 array elements from the user and prints one element.

💻 Source Code
#include <stdio.h>

int main() {
    int num[5] = {};

    printf("enter your first element of an array\n");
    scanf("%d", &num[0]);

    printf("enter your second element of an array\n");
    scanf("%d", &num[1]);

    printf("enter your third element of an array\n");
    scanf("%d", &num[2]);

    printf("enter your fourth element of an array\n");
    scanf("%d", &num[3]);

    printf("enter your fifth element of an array\n");
    scanf("%d", &num[4]);

    printf("your third element of an array: %d", num[2]);
    return 0;
}

🧾 Input
2
4
6
8
5

📤 Output
your third element of an array: 6

🔹 3). Print Array Elements Using Index
📌 Description

This program prints all array elements individually using index numbers.

💻 Source Code
#include <stdio.h>

int main() {
    int num[5] = {2,4,6,9,5};

    printf("%d\n", num[0]);
    printf("%d\n", num[1]);
    printf("%d\n", num[2]);
    printf("%d\n", num[3]);
    printf("%d\n", num[4]);

    return 0;
}

🧾 Input
{2,4,6,9,5}

📤 Output
2
4
6
9
5

🔹 4). Print Array Using for Loop
📌 Description

This program prints all array elements using a for loop.

💻 Source Code
#include <stdio.h>

int main() {
    int num[7] = {2,4,6,9,5,3,7};

    for(int i = 0; i < 6; i++) {
        printf("%d\n", num[i]);
    }

    return 0;
}

🧾 Input
{2,4,6,9,5,3,7}

📤 Output
2
4
6
9
5
3

🔹 5). Update Array Element
📌 Description

This program updates a specific array element and prints the array before and after update.

💻 Source Code
#include <stdio.h>

int main() {
    int num[5] = {1,3,5,7,9};

    for(int i = 0; i < 4; i++) {
        printf("%d\n", num[i]);
    }

    num[2] = 10;

    for(int i = 0; i < 4; i++) {
        printf("%d\n", num[i]);
    }

    return 0;
}

🧾 Input
Original Array = {1,3,5,7,9}
Updated value at index 2 = 10

📤 Output
1
3
5
7
1
3
10
7

🔹 6). Delete Element from Array (By Position)
📌 Description

This program deletes an element from a given position by shifting array elements.

💻 Source Code
#include <stdio.h>

int main() {
    int num[5] = {10,11,12,13,14};
    int pos = 3;

    for(int i = pos; i < 5; i++) {
        num[i] = num[i + 1];
    }

    for(int i = 0; i < 5; i++) {
        printf("%d\n", num[i]);
    }

    return 0;
}

🧾 Input
Array = {10,11,12,13,14}
Delete position = 3

📤 Output
10
11
12
14
0


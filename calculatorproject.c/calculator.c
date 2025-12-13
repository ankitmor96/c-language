#include <stdio.h>


int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int divide(int a, int b);
int mod(int a, int b);

int main() {

    int choice, a, b;

    do {
        printf("\n  Calculator Menu \n");
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5) {
            printf("Enter first number: ");
            scanf("%d", &a);

            printf("Enter second number: ");
            scanf("%d", &b);
        }

        switch (choice) {
            case 1:
                printf("Addition = %d\n", add(a, b));
                break;

            case 2:
                printf("Subtraction = %d\n", sub(a, b));
                break;

            case 3:
                printf("Multiplication = %d\n", mul(a, b));
                break;

            case 4:
                if (b != 0)
                    printf("Division = %d\n", divide(a, b));
                else
                    printf("Division by zero is not allowed\n");
                break;

            case 5:
                printf("Modulus = %d\n", mod(a, b));
                break;

            case 0:
                printf("Exiting Calculator...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 0);

    return 0;
}


int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

int mod(int a, int b) {
    return a % b;
}
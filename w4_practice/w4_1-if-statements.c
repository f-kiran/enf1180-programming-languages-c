/*
 * This program demonstrates if and if...else selection statements.
 * Practice writing conditional logic to make decisions in your program.
 */

/* This program demonstrates the use of if and if...else statements in C.
It prompts the user to enter a number and determines various properties
of that number (positive/negative/zero, even/odd, greater than 100, etc.).

The program highlights the use of comparison operators and logical operators
in decision-making statements. */

/* gcc w4_1-if-statements.c -o w4_1-if-statements */

#include <stdio.h>

int main(void) {
    int number;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Please enter a valid integer.\n");
        return 1;
    }

    // Simple if statement
    if (number > 0)
        printf("The number is positive.\n");

    // if...else statement
    if (number < 0)
        printf("The number is negative.\n");
    else if (number == 0)
        printf("The number is zero.\n");
    else
        printf("The number is positive.\n");

    // Nested if statements
    if (number != 0) {
        if (number % 2 == 0)
            printf("The number is even.\n");
        else
            printf("The number is odd.\n");
    }

    // Using logical operators
    if (number > 0 && number < 100)
        printf("The number is positive and less than 100.\n");
    else if (number >= 100 || number <= -100)
        printf("The number is at least 100 in absolute value.\n");

    // Demonstrating multiple conditions
    if (number > 0) {
        if (number % 2 == 0)
            printf("This is a positive even number.\n");
        else
            printf("This is a positive odd number.\n");
    } else if (number < 0) {
        if (number % 2 == 0)
            printf("This is a negative even number.\n");
        else
            printf("This is a negative odd number.\n");
    } else {
        printf("Zero is neither positive nor negative.\n");
    }

    return 0;
}

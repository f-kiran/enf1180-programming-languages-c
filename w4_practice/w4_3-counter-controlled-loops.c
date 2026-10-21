/*
 * This program demonstrates counter-controlled repetition using while loops.
 * Counter-controlled loops execute a fixed number of times based on a counter variable.
 */

/* This program demonstrates counter-controlled repetition using while loops.
In counter-controlled repetition, we know exactly how many times the loop
should execute. We initialize a counter, check a condition on that counter,
and increment/decrement the counter each iteration.

Examples include: printing 1 to 10, computing the sum of numbers,
displaying a pattern, etc. */

/* gcc w4_3-counter-controlled-loops.c -o w4_3-counter-controlled-loops */

#include <stdio.h>

int main(void) {
    int counter;
    int sum = 0;

    printf("=== Simple Counter-Controlled Loop ===\n");
    printf("Print numbers from 1 to 5:\n");
    counter = 1;
    while (counter <= 5) {
        printf("%d ", counter);
        counter++;  // Increment the counter
    }
    printf("\n");

    printf("\n=== Sum of Numbers 1 to 10 ===\n");
    sum = 0;
    counter = 1;
    while (counter <= 10) {
        sum += counter;  // Add counter to sum
        counter++;
    }
    printf("Sum of 1 to 10: %d\n", sum);

    printf("\n=== Print Even Numbers from 2 to 20 ===\n");
    counter = 2;
    while (counter <= 20) {
        printf("%d ", counter);
        counter += 2;  // Increment by 2 to get even numbers
    }
    printf("\n");

    printf("\n=== Multiplication Table ===\n");
    printf("5 x 1 = 5\n");
    printf("5 x 2 = 10\n");
    printf("5 x 3 = 15\n");
    printf("5 x 4 = 20\n");
    printf("5 x 5 = 25\n");

    printf("\nUsing counter-controlled loop:\n");
    int multiplier = 1;
    int number = 5;
    while (multiplier <= 5) {
        printf("%d x %d = %d\n", number, multiplier, number * multiplier);
        multiplier++;
    }

    printf("\n=== Count down from 10 to 1 ===\n");
    counter = 10;
    while (counter >= 1) {
        printf("%d ", counter);
        counter--;  // Decrement the counter
    }
    printf("\n");

    printf("\n=== Print a Pattern ===\n");
    printf("Print numbers in a pattern:\n");
    int row = 1;
    while (row <= 4) {
        int col = 1;
        while (col <= row) {
            printf("%d ", col);
            col++;
        }
        printf("\n");
        row++;
    }

    printf("\n=== Calculate Factorial ===\n");
    int n = 5;
    int factorial = 1;
    counter = 1;
    printf("Calculate 5! (5 factorial):\n");
    while (counter <= n) {
        factorial *= counter;
        printf("%d! = %d\n", counter, factorial);
        counter++;
    }

    return 0;
}

/*
 * This program demonstrates increment, decrement, and assignment operators.
 * Understand how to modify variables and use compound assignment operators.
 */

/* This program demonstrates the use of increment (++), decrement (--),
and assignment operators in C. It shows both pre and post increment/decrement
operations and their differences, as well as compound assignment operators
like +=, -=, *=, /=, and %=. */

/* gcc w4_2-increment-decrement-operators.c -o w4_2-increment-decrement-operators */

#include <stdio.h>

int main(void) {
    int counter = 0;
    int value = 10;

    printf("=== Simple Assignment Operator ===\n");
    counter = 5;
    printf("counter = 5: %d\n", counter);

    printf("\n=== Increment Operators ===\n");
    counter = 5;
    printf("Initial counter: %d\n", counter);
    printf("counter++: %d (post-increment: uses value then increments)\n", counter++);
    printf("After counter++, counter is now: %d\n", counter);

    counter = 5;
    printf("\nInitial counter: %d\n", counter);
    printf("++counter: %d (pre-increment: increments then uses value)\n", ++counter);
    printf("After ++counter, counter is now: %d\n", counter);

    printf("\n=== Decrement Operators ===\n");
    counter = 5;
    printf("Initial counter: %d\n", counter);
    printf("counter--: %d (post-decrement: uses value then decrements)\n", counter--);
    printf("After counter--, counter is now: %d\n", counter);

    counter = 5;
    printf("\nInitial counter: %d\n", counter);
    printf("--counter: %d (pre-decrement: decrements then uses value)\n", --counter);
    printf("After --counter, counter is now: %d\n", counter);

    printf("\n=== Compound Assignment Operators ===\n");
    value = 10;
    printf("Initial value: %d\n", value);

    value += 5;  // value = value + 5
    printf("value += 5: %d\n", value);

    value -= 3;  // value = value - 3
    printf("value -= 3: %d\n", value);

    value *= 2;  // value = value * 2
    printf("value *= 2: %d\n", value);

    value /= 4;  // value = value / 4
    printf("value /= 4: %d\n", value);

    value %= 5;  // value = value % 5
    printf("value %%= 5: %d\n", value);

    printf("\n=== Practical Example: Loop Counter ===\n");
    printf("Counting from 1 to 5:\n");
    int i = 1;
    while (i <= 5) {
        printf("%d ", i);
        i++;  // Increment operator
    }
    printf("\n");

    printf("Counting down from 5 to 1:\n");
    i = 5;
    while (i >= 1) {
        printf("%d ", i);
        i--;  // Decrement operator
    }
    printf("\n");

    return 0;
}

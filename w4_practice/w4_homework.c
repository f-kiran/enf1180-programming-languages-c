/*
 * Week 4 Practice Homework Problems
 * Topics: Selection statements (if/else), repetition (while loops),
 * counter-controlled and sentinel-controlled loops, operators
 */

#include <stdio.h>

/* Problem 1: Number Classification
 * Write a program that reads an integer and determines:
 * - Whether it's positive, negative, or zero
 * - Whether it's even or odd
 * - Whether it's divisible by 5
 *
 * Expected Output:
 * Enter an integer: 15
 * The number is positive.
 * The number is odd.
 * The number is divisible by 5.
 */

void problem1(void) {
    printf("=== Problem 1: Number Classification ===\n");
    int num;
    printf("Enter an integer: ");

    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return;
    }

    // Determine if positive, negative, or zero
    if (num > 0)
        printf("The number is positive.\n");
    else if (num < 0)
        printf("The number is negative.\n");
    else
        printf("The number is zero.\n");

    // Determine if even or odd
    if (num % 2 == 0)
        printf("The number is even.\n");
    else
        printf("The number is odd.\n");

    // Check if divisible by 5
    if (num % 5 == 0)
        printf("The number is divisible by 5.\n");
    else
        printf("The number is not divisible by 5.\n");
}

/* Problem 2: Grade Letter Assignment
 * Write a program that reads a numeric grade (0-100) and assigns a letter grade:
 * 90-100: A, 80-89: B, 70-79: C, 60-69: D, below 60: F
 *
 * Expected Output:
 * Enter your grade (0-100): 85
 * Your letter grade is: B
 */

void problem2(void) {
    printf("\n=== Problem 2: Grade Letter Assignment ===\n");
    int grade;
    char letter_grade;

    printf("Enter your grade (0-100): ");
    if (scanf("%d", &grade) != 1) {
        printf("Invalid input.\n");
        return;
    }

    if (grade >= 90)
        letter_grade = 'A';
    else if (grade >= 80)
        letter_grade = 'B';
    else if (grade >= 70)
        letter_grade = 'C';
    else if (grade >= 60)
        letter_grade = 'D';
    else
        letter_grade = 'F';

    printf("Your letter grade is: %c\n", letter_grade);
}

/* Problem 3: Sum of Numbers (Counter-Controlled)
 * Write a program that calculates the sum of the first n positive integers.
 * Use a counter-controlled while loop.
 *
 * Expected Output:
 * Enter n: 5
 * Sum of 1 to 5: 15
 * 1 + 2 + 3 + 4 + 5 = 15
 */

void problem3(void) {
    printf("\n=== Problem 3: Sum of First n Numbers ===\n");
    int n, sum = 0, counter = 1;

    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Invalid input.\n");
        return;
    }

    while (counter <= n) {
        sum += counter;
        if (counter < n)
            printf("%d + ", counter);
        else
            printf("%d", counter);
        counter++;
    }
    printf(" = %d\n", sum);
}

/* Problem 4: Powers of 2 Table (Counter-Controlled)
 * Write a program that prints a table of powers of 2 from 2^1 to 2^10
 * using a counter-controlled while loop.
 *
 * Expected Output:
 * 2^1 = 2
 * 2^2 = 4
 * 2^3 = 8
 * ...
 * 2^10 = 1024
 */

void problem4(void) {
    printf("\n=== Problem 4: Powers of 2 Table ===\n");
    int power = 1;
    int result = 1;

    printf("Powers of 2 from 2^1 to 2^10:\n");
    while (power <= 10) {
        result *= 2;
        printf("2^%d = %d\n", power, result);
        power++;
    }
}

/* Problem 5: Average with Sentinel Value
 * Write a program that reads numbers until the user enters -1,
 * then calculates and displays the average.
 *
 * Expected Output:
 * Enter numbers (-1 to stop):
 * 85
 * 90
 * 78
 * 92
 * -1
 * Average: 86.25
 */

void problem5(void) {
    printf("\n=== Problem 5: Average with Sentinel ===\n");
    int value, sum = 0, count = 0;

    printf("Enter numbers (-1 to stop):\n");
    scanf("%d", &value);

    while (value != -1) {
        sum += value;
        count++;
        scanf("%d", &value);
    }

    if (count > 0) {
        double average = (double)sum / count;
        printf("Average: %.2f\n", average);
    } else {
        printf("No numbers entered.\n");
    }
}

/* Problem 6: Factorial Calculator
 * Write a program that calculates the factorial of a number n.
 * Use a counter-controlled while loop.
 * n! = n * (n-1) * (n-2) * ... * 1
 *
 * Expected Output:
 * Enter n: 5
 * 5! = 120
 */

void problem6(void) {
    printf("\n=== Problem 6: Factorial Calculator ===\n");
    int n, factorial = 1, counter = 1;

    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid input.\n");
        return;
    }

    while (counter <= n) {
        factorial *= counter;
        counter++;
    }

    printf("%d! = %d\n", n, factorial);
}

int main(void) {
    int choice;

    printf("Week 4 Practice Problems\n");
    printf("========================\n\n");
    printf("1. Number Classification\n");
    printf("2. Grade Letter Assignment\n");
    printf("3. Sum of First n Numbers (Counter-Controlled)\n");
    printf("4. Powers of 2 Table (Counter-Controlled)\n");
    printf("5. Average with Sentinel Value\n");
    printf("6. Factorial Calculator\n");
    printf("0. Exit\n\n");

    printf("Enter your choice (0-6): ");
    scanf("%d", &choice);

    // Clear input buffer
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    switch (choice) {
        case 1:
            problem1();
            break;
        case 2:
            problem2();
            break;
        case 3:
            problem3();
            break;
        case 4:
            problem4();
            break;
        case 5:
            problem5();
            break;
        case 6:
            problem6();
            break;
        case 0:
            printf("Goodbye!\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

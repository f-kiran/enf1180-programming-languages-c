/*
 * This program demonstrates sentinel-controlled repetition using while loops.
 * Sentinel-controlled loops execute until a special "sentinel" value is entered.
 */

/* This program demonstrates sentinel-controlled repetition using while loops.
In sentinel-controlled repetition, we don't know in advance how many times
the loop should execute. Instead, we read values until a special "sentinel"
value is encountered. This is common when processing user input.

The sentinel value is a value that signals the end of data. For example:
- Use -1 to indicate "stop reading numbers"
- Use "QUIT" or "END" to indicate "stop reading names"
- Use 0 to indicate "stop"

The sentinel value must be distinguishable from valid data and must not
be a valid value for your program to process. */

/* gcc w4_4-sentinel-controlled-loops.c -o w4_4-sentinel-controlled-loops */

#include <stdio.h>

int main(void) {
    int value;
    int sum = 0;
    int count = 0;
    int grade;
    int passing_count = 0;
    int highest_grade = -1;

    printf("=== Example 1: Read Numbers Until -1 ===\n");
    printf("Enter numbers (enter -1 to stop):\n");

    sum = 0;
    count = 0;
    value = 0;  // Initialize variable

    // Read value before loop
    scanf("%d", &value);

    // Continue while value is not the sentinel
    while (value != -1) {
        sum += value;
        count++;
        printf("You entered: %d, running sum: %d\n", value, sum);
        scanf("%d", &value);  // Read next value
    }

    if (count > 0) {
        printf("Total numbers entered: %d\n", count);
        printf("Sum of all numbers: %d\n", sum);
        printf("Average: %.2f\n", (double)sum / count);
    } else {
        printf("No numbers were entered.\n");
    }

    printf("\n=== Example 2: Read Grades Until -1 (Count Passing) ===\n");
    printf("Enter student grades (0-100), enter -1 to stop:\n");

    passing_count = 0;
    highest_grade = -1;

    scanf("%d", &grade);

    while (grade != -1) {
        if (grade >= 60) {
            passing_count++;
        }
        if (grade > highest_grade) {
            highest_grade = grade;
        }
        printf("Grade: %d\n", grade);
        scanf("%d", &grade);
    }

    printf("Number of passing grades (60+): %d\n", passing_count);
    if (highest_grade != -1) {
        printf("Highest grade entered: %d\n", highest_grade);
    }

    printf("\n=== Example 3: Read Values Until 0 ===\n");
    printf("Enter positive numbers (enter 0 to stop):\n");

    sum = 0;
    count = 0;

    scanf("%d", &value);

    while (value != 0) {
        if (value > 0) {
            sum += value;
            count++;
            printf("Added: %d\n", value);
        } else {
            printf("Negative number ignored: %d\n", value);
        }
        scanf("%d", &value);
    }

    printf("Total positive numbers: %d\n", count);
    printf("Sum of positive numbers: %d\n", sum);
    if (count > 0) {
        printf("Average of positive numbers: %.2f\n", (double)sum / count);
    }

    printf("\n=== Practical Tip ===\n");
    printf("Sentinel-controlled loops are useful when:\n");
    printf("- You don't know how many items to process\n");
    printf("- User input determines when to stop\n");
    printf("- Processing data from a file with unknown length\n");

    return 0;
}

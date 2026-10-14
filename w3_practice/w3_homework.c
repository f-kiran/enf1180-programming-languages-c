/*
 * Week 3 at-home practice: Study and quiz summary - Optional
 *
 * Instructions
 * 1. Read the whole program before editing. Complete each TODO in order.
 * 2. Compile and run the program after each task. Test with more than one set
 *    of inputs, including a quiz score of zero and a non-round percentage.
 * 3. Use the Week 3 practice programs as references, but write and explain
 *    your own code. Be ready to describe your choices in the next class.
 *
 * Compile from this folder:
 *   gcc -std=c11 -Wall -Wextra w3_homework.c -o w3_homework
 * Run:
 *   ./w3_homework
 * On Windows, run w3_homework.exe using the course's configured toolchain.
 *
 * The name input is one word. Enter non-negative minutes and sleep hours,
 * and make sure 0 <= correct_answers <= total_questions.
 */
#include <stdio.h>

#define MINUTES_PER_HOUR 60

int main(void) {
    const double TARGET_SLEEP_HOURS = 8.0;

    char first_name[30];
    char initial;
    int study_minutes;
    int correct_answers;
    int total_questions;
    double sleep_hours;

    printf("Enter your first name (one word): ");
    if (scanf("%29s", first_name) != 1) {
        printf("Could not read your name.\n");
        return 1;
    }

    printf("Enter your first initial: ");
    if (scanf(" %c", &initial) != 1) {
        printf("Could not read your initial.\n");
        return 1;
    }

    printf("Enter the number of minutes you studied: ");
    if (scanf("%d", &study_minutes) != 1 || study_minutes < 0) {
        printf("Enter a non-negative whole number of minutes.\n");
        return 1;
    }

    printf("Enter the number of questions answered correctly: ");
    if (scanf("%d", &correct_answers) != 1 || correct_answers < 0) {
        printf("Enter a non-negative whole number of correct answers.\n");
        return 1;
    }

    printf("Enter the total number of quiz questions: ");
    if (scanf("%d", &total_questions) != 1 || total_questions <= 0 ||
        correct_answers > total_questions) {
        printf("The total must be positive and at least the correct-answer count.\n");
        return 1;
    }

    printf("Enter your sleep time in hours (for example, 7.5): ");
    if (scanf("%lf", &sleep_hours) != 1 || sleep_hours < 0) {
        printf("Enter a non-negative number of hours.\n");
        return 1;
    }

    printf("\nEntries for %s (%c):\n", first_name, initial);
    printf("Study minutes: %d | Correct answers: %d/%d\n",
           study_minutes, correct_answers, total_questions);
    printf("Sleep: %.2f hours | Sleep target: %.2f hours\n",
           sleep_hours, TARGET_SLEEP_HOURS);

    /*
     * TODO 1 - Type sizes and strings
     * Print first_name, initial, study_minutes, and sleep_hours. Also print
     * sizeof first_name, sizeof initial, sizeof study_minutes, and
     * sizeof sleep_hours using the correct printf format specifiers.
     * Remember: sizeof returns a size_t value.
     */

    /*
     * TODO 2 - Arithmetic and conversions
     * Convert study_minutes to hours using MINUTES_PER_HOUR and print the
     * result with two digits after the decimal point.
     * Print the quiz percentage. Make sure to convert at least one operand
     * to double before division, so this is not integer division.
     * Also print correct_answers / total_questions as integer division and
     * explain in a short comment why the two division results differ.
     */

    /*
     * TODO 3 - Comparisons and remainder
     * Print whether correct_answers is greater than or equal to half of
     * total_questions. Print whether correct_answers is even or odd using %.
     * The remainder operator works with integers.
     */

    /*
     * TODO 4 - Pointer practice
     * Declare an int pointer that points to study_minutes. Print the address
     * of study_minutes and the pointer using %p (cast each address to void *).
     * Print the value reached by dereferencing the pointer. Then add 5 to
     * study_minutes through the pointer and print study_minutes again.
     * The actual address will vary between runs and systems.
     */

    /*
     * TODO 5 - Named constant
     * Compare sleep_hours with TARGET_SLEEP_HOURS and print whether the
     * entered sleep time meets the target. Print the target value as well.
     */

    return 0;
}

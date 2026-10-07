#include <stdio.h> 
// Include the standard input-output library for using printf and scanf functions

int main() {
    // Declare a character array to hold the user's name
    char name[50];
    // Prompt the user to enter their name
    printf("Please enter your name:");
    // Read the user's input and store it in the 'name' array, limiting the input to 49 characters to prevent buffer overflow
    scanf("%49s", name);
    // Display a welcome message with the user's name
    printf("****************************\n");
    printf("Hello, %s!\n", name);
    printf("Today is a good day to code.\n");
    printf("****************************\n");
    // Return 0 to indicate that the program ended successfully
    return 0;
}
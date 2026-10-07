// https://www.google.com/search?q=f+to+c
// More details are here
// https://www.naukri.com/code360/library/program-to-convert-fahrenheit-to-celsius

#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    // Prompt user for input
    printf("Enter temperature in Fahrenheit: ");
    // Read the input temperature in Fahrenheit and store it in the variable float type 'fahrenheit'
    scanf("%f", &fahrenheit);

    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5 / 9;

    // Display the result
    printf("%.3f Fahrenheit is equal to %.5f Celsius.\n", fahrenheit, celsius);
// Display the result in scientific notation
    printf("%.9e\n", 220.0/7);
    printf("%-25.9e\n", 220.0/7);
    printf("%10.4f\n", 220.0/7);
    printf("%.10d\n", 220);

    return 0;
}


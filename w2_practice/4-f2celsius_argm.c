#include <stdio.h>
#include <stdlib.h>

// https://www.google.com/search?q=f+to+c

int main(int argc, char *argv[]) {
    // Check if the user provided exactly one argument
    if (argc != 2) {
        printf("Usage: %s <temperature_in_fahrenheit>\n", argv[0]);
        return 1;
    }

    // Convert the string argument to a floating-point number
    double fahrenheit = atof(argv[1]);

    // Perform the Celsius conversion formula: (F - 32) * 5 / 9
    double celsius = (fahrenheit - 32.0) * 5.0 / 9.0;

    // Print the result formatted to 2 decimal places
    printf("%.2f°F is %.2f°C\n", fahrenheit, celsius);

    return 0;
}



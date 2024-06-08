#include <stdio.h>

int main() {
    double x, e_raised_to_x = 1.0; // Initialize e^x with 1.0
    int num_terms;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the number of terms (for approximating e^x): ");
    scanf("%d", &num_terms);

    for (int i = 0; i < num_terms; i++) {
        double factorial = 1.0; // Initialize factorial for each term
        for (int j = 1; j <= i; j++) {
            factorial *= j; // Calculate factorial
        }

        // Add the term to the e^x approximation
        e_raised_to_x += (pow(x, i) / factorial); // Include the power of x in each term
    }

    printf("The approximate value of e^%.2lf (using %d terms) is: %.10lf\n", x, num_terms, e_raised_to_x);

    return 0;
}
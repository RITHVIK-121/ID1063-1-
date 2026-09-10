//rithvik
//Date 10-09-2026
#include <stdio.h>
#include <math.h>

// Define the function f(x) = e^x - 2
double f(double x) {
    return exp(x) - 2.0;
}

// Define the derivative f'(x) = e^x
double f_prime(double x) {
    return exp(x);
}

int main() {
    double x0 = 1.0; // Initial guess
    double x1;

    // Newton-Raphson single iteration formula: x_1 = x_0 - f(x_0) / f'(x_0)
    x1 = x0 - (f(x0) / f_prime(x0));

    // Print the result rounded off to two decimal places
    printf("The approximated value of the root after one iteration is: %.2f\n", x1);

    return 0;
}


#include <stdio.h>
#include <math.h>

#define EPSILON 1e-9

// Function to check if the system has at least one solution for a given k
int has_solution(double k) {
    // Representing the augmented matrix [A|B]
    // Row 1: 2x + 3y = 6
    // Row 2: 4x + 6y = 3k
    double matrix[2][3] = {
        {2.0, 3.0, 6.0},
        {4.0, 6.0, 3.0 * k}
    };

    // Perform Row Operation: R2 = R2 - (matrix[1][0] / matrix[0][0]) * R1
    double factor = matrix[1][0] / matrix[0][0];
    for (int j = 0; j < 3; j++) {
        matrix[1][j] -= factor * matrix[0][j];
    }

    // After row reduction, if the coefficients are 0 but the constant is non-zero,
    // the system is inconsistent (no solution).
    if (fabs(matrix[1][0]) < EPSILON && fabs(matrix[1][1]) < EPSILON) {
        if (fabs(matrix[1][2]) > EPSILON) {
            return 0; // No solution
        }
    }
    
    return 1; // At least one solution (infinitely many)
}

int main() {
    int found = 0;
    
    // Testing integer values for k in a reasonable range
    for (int k = -100; k <= 100; k++) {
        if (has_solution((double)k)) {
            printf("The value of k for which the equations have at least one solution is: %d\n", k);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("No integer solution found for k in the tested range.\n");
    }

    return 0;
}


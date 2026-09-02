#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    double values[n];
    double sum = 0.0;

    printf("Enter the values: ");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &values[i]);
        sum += values[i];
    }

    double average = sum / n;
    int count_above = 0;

    for (int i = 0; i < n; i++) {
        if (values[i] > average) {
            count_above++;
        }
    }

    printf("Average: %.1f\n", average);
    printf("Number of values above the average: %d\n", count_above);

    return 0;
}


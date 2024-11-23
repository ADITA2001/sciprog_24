#include <stdio.h>
#include <stdlib.h>

// Calculate the factorial
double factorial(int n) {
    double output = 1.0;
    if (n == 0 || n == 1) {
        return 1.0;
    }
    output = 1.0;
    for (int i = 2; i <= n; i++) {
        output *= i;
    }
    return output;
}

// Calculate e^x for x = 1
double estimate_e(int num_of_terms) {
    double *term = (double*) malloc(num_of_terms * sizeof(double));
    if (term == NULL) {
        printf("Failed to allocated memory\n");
        exit(1);
    }

    term[0] = 1.0; // f(x) starts with 1 for x=1

    // Calculate each term in the Taylor series
    double summation = term[0];
    for (int i = 1; i < num_of_terms; i++) {
        term[i] = 1.0 / factorial(i);
        summation += term[i];
    }

    free(term);
    return summation;
}

int main() {
    int num_of_terms;
    printf("Enter the num_of_terms of the polynomial: ");
    scanf("%d", &num_of_terms);

    // Iterate from 1st to 15th num_of_terms
    for (int i = 1; i <= num_of_terms && i <= 15; i++) {
        double estimate = estimate_e(i);
        printf("num_of_terms %d: Estimate of e = %.10f\n", i, estimate);
    }

    // Compare with the actual value of e
    printf("Actual value of e = 2.7182818284\n");
    return 0;
}

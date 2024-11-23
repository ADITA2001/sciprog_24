#include <stdio.h>

// Function to compute Fibonacci series step
void fibonacci_step(int *f1, int *f2) {
    int temp = *f1;   // Store current Fn-1
    *f1 = *f1 + *f2; // Compute Fn
    *f2 = temp;        // Update Fn-1 to the previous Fn-1
}

int main() {
    int n, i;
    
    // Get the value of n from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    // Initial values for Fibonacci sequence
    int f1 = 1, f2 = 0;
    
    // Print F0 and F1
    printf("Fibonacci series up to %d: \n", n);
    printf("%d, %d", f2, f1);

    // Loop to calculate and print Fibonacci series up to n
    for (i = 2; i <= n; i++) {
        fibonacci_step(&f1, &f2);  // Update f1 and f2 using the function
        printf(", %d", f1);         // Print next Fibonacci number
    }
    
    printf("\n");
    return 0;
}

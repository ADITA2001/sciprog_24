#include <stdio.h>
#include <stdlib.h>

// Allocate memory for an array of integers
int* allocateArray(int s) {
    return (int*)malloc(s * sizeof(int));
}

// Fill an array with ones
void fillWithOnes(int* array, int s) {
    for (int i = 0; i < s; i++) {
        array[i] = 1;
    }
}

// Print the array
void printArray(int* array, int s) {
    for (int i = 0; i < s; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// Free the allocated memory
void freeArray(int* array) {
    free(array);  //
}

int main() {
    
    int s;
    printf("Enter the s of the array: ");
    scanf("%d", &s);

    // Test allocateArray()
    int* array = allocateArray(s);
    if (array == NULL) {
        printf("Failed to allocated memory\n");
        return 1;
    }

    // Test fillWithOnes()
    fillWithOnes(array, s);

    // Test printArray()
    printf("Array with ones: ");
    printArray(array, s);

    // Test freeArray()
    freeArray(array);

    return 0;
}
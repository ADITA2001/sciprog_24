Compile
gcc estimate.c estimate -lm
gcc array_pointers.c array_pointers -lm

output of estimate.c:
Enter the num_of_terms of the polynomial: 6
num_of_terms 1: Estimate of e = 1.0000000000
num_of_terms 2: Estimate of e = 2.0000000000
num_of_terms 3: Estimate of e = 2.5000000000
num_of_terms 4: Estimate of e = 2.6666666667
num_of_terms 5: Estimate of e = 2.7083333333
num_of_terms 6: Estimate of e = 2.7166666667
Actual value of e = 2.7182818284

output of array_pointers.c:
Enter the s of the array: 23
Array with ones: 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 
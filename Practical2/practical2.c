#include <stdio.h>
#include <math.h>

int main(void) {
/* Declare variables */
   int i;
   float sum1, sum2, diff;

/* First sum (calculating harmonic series in ascending order) */
   sum1 = 0.0;
   for (i=1; i<=1000; i++) {
 sum1 = sum1 +1.0/(float)i;
   }

/* Second sum (calculating harmonic series in descending order) */
   sum2 = 0.0;
   for (i=1000; i>0; i--) {
    sum2 = sum2 +1.0/(float)i;
   }

/* Output the results of both sums */
   printf(" Sum1=%f\n",sum1);
   printf(" Sum2=%f\n",sum2);

/* Calculate and output the difference between the two sums */
   diff = sum1 - sum2;
   printf(" Difference between the two is %f\n",diff);
   return 0;

}
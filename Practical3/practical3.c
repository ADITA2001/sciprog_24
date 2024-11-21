#include<stdio.h>
#include<math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
int main(void) {
   int n =12;
   float a=0;
   float b=M_PI/3;

   float sum = tan(a) + tan(b);
   printf("The value of sum before loop is: %f\n",sum);
   int i;
   for(i=5;i<60;i=i+5){
      sum+= 2*tan(i*M_PI/180);
      if(i%2==0){
         printf("I'm even and here's the value of sum %f\n",sum);
      }

   }
   printf("The value of sum after loop is: %f\n",sum);
   sum =((b-a)/(2*n) * sum);
   printf("The final value of sum is: %f\n",sum);
   printf("The actual value of sum is: %f\n",logf(2));
   
   float abs_diff = fabs(sum - logf(2));
   float rel_diff = fabs(1-(sum/logf(2)));
   printf("abs_diff = %f\nrel_diff = %f\n", abs_diff,rel_diff);
   return 0 ;
}
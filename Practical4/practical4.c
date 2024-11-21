#include <stdio.h>
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main(void){
    int a;
    double tan_values[13];
    double area = 0;
    for(a = 0; a < 13; a++) {
        int n = a * 5;
        double radian = n * M_PI / 180;
        tan_values[a] = tan(radian);
    }
    for (int i = 0; i < 13; i++) {
        int n = i*5;
        area = area + 0.5 * (n * M_PI / 180) * (tan_values[i] + tan_values[i + 1]);
    }
    for(a = 0; a < 13; a++) {
        printf("tan(%d) = %f\n", a * 5, tan_values[a]);
    }
    printf("area under the curve = %f",area);
    return 0;

}

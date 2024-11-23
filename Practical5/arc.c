#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double arc1(double x, double del);
double arc2(double x);

int main(void)
{
    double del;
    printf("Please enter a Positive real number del: \n");
    scanf("%lf", &del);

    if (del < 0)
    {
        printf("del was negative\n");
        exit(1);
    }

    double x = -0.9;
    int length = 1000;
    double t1[1000];
    double t2[1000];
    int i = 0;
    while (x <= 0.9 && i < length)
    {
        t1[i] = arc1(x, del);
        t2[i] = arc2(x);
        printf("The Difference at x=%lf is %.10lf \n", x, fabs((t1[i] - t2[i])/ t2[i]));
        i++;
        x += 0.1; 
    }
    return 0;
}

double arc1(double x, double del)
{
    double sum = 0;
    double elem, val;
    int n = 0;
    do{
        val = 2*n +1;
        elem = pow(x, val) / val;
        sum += elem;
        n++;
    }while (fabs(elem)>= del);
    return sum;
}

double arc2(double x)
{
    return (log(1 + x) - log(1 - x)) / 2;
}

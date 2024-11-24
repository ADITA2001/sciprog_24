#include <stdio.h>
#include <stdlib.h>

int iGCD(int a, int b);
int rGCD(int a, int b);

int main() {
    int output1, output2 = 0;
    int a, b, error = 0;
    printf("Enter two positive integers a and b:\n");
    scanf("%d %d", &a, &b);
    if (a<=0 || b<=0) {
        printf("Please enter only positive integars for a and b\n");
        return 1;
    }
    output1 = iGCD(a, b);
    printf("iterativeGCD = %d\n", output1);

    output2 = rGCD(a, b);
    printf("recursiveGCD = %d\n", output2);
    return 0;
}
int iGCD(int a, int b) {
    int temp = 0;
    while (b!=0) {
        temp = b;
        b = a%b;
        a = temp;    
    }
    return a;
}
int rGCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return rGCD(b, a%b);
    }
}
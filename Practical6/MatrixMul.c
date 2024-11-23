#include<stdio.h>

int main() {
    // Define your variables
    int n = 5;
    int p = 3;
    int q = 4;

    // Define your arrays
    double I[n][p];
    double J[p][q];
    double K[n][q];
    // Loop indices
    int w,x,y;

    //Init I, J and K
    for(w=0; w<n; w++) {
        for(x=0; x<p; x++) {
            I[w][x]=w+x;
        }
    }
    for(w=0; w<p; w++) {
        for(x=0; x<q; x++) {
            J[w][x]=w-x;
        }
    }
    for(w=0;w<n;w++) {
        for(x=0;x<q;x++) {
            K[w][x]=0.0;
        }
    }
    // Matrix multiplication
    
    for(w=0;w<n;w++) {
        for(x=0;x<q;x++) {
            for(y=0;y<p;y++) {
                K[w][x] = K[w][x]+I[w][y]*J[y][x];
            }
        }
    }
    // Print out the matrices
    printf("The matrix I is \n\n");
    for(w=0;w<n;w++) {
        for(x=0;x<p;x++) {
            printf("%3.0f", I[w][x]);
        }
        printf("\n");
    }
    printf("The matrix J is \n\n");
    for(w=0;w<p;w++) {
        for(x=0;x<q;x++) {
            printf("%3.0f", J[w][x]);
        }
        printf("\n");
    }
    printf("The matrix K is \n\n");
    for(w=0;w<n;w++) {
        for(x=0;x<q;x++) {
            printf("%3.0f", K[w][x]);
        }
        printf("\n");
    }    
    return 0;
}
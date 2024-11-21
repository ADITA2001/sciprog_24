#include<stdio.h>
#include<math.h>
int main(void){
    int n;
    printf("enter the number of series you want to print:");
    scanf("%d",&n);
    int a = 0;
    int b = 1;
    int c;
    printf("series:\n");
    printf("%d\n",a);
    printf("%d\n",b);
    for (int i = 2; i < n; i++) {
        c = a + b;
        a = b;
        b = c;
        printf("%d\n",c);
    }
    
}
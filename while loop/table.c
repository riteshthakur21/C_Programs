#include <stdio.h>
int main() {
    int i=1, n;
    printf("\nMultiplication Table of num:");
    scanf("%d", &n);
    while(i <= 10) {
        printf("i x %d = %d\n", i, n*i);
        i++;
    }
    return 0;
}
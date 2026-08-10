// fib_iterative.c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    unsigned long long a = 0, b = 1, next;
    int n;

    printf("Enter number of Fibonacci terms (n): ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Fibonacci series (first %d terms):\n", n);
    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            printf("%llu", a);
        } else if (i == 2) {
            printf(" %llu", b);
        } else {
            next = a + b;
            printf(" %llu", next);
            a = b;
            b = next;
        }
    }
    printf("\n");
    return 0;
}

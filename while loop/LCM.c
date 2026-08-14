#include <stdio.h>

int main() {
    int num1, num2, gcd, lcm;

    // Prompt user for input
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Check for non-positive numbers
    if (num1 <= 0 || num2 <= 0) {
        printf("Error: Both numbers must be positive.\n");
        return 1;
    }

    // Calculate GCD using Euclidean algorithm
    int a = num1, b = num2;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;

    // Calculate LCM using the formula
    lcm = (num1 * num2) / gcd;

    // Output the result
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}
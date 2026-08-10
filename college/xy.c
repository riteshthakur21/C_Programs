#include <stdio.h>
#include <math.h> // For the pow() function

int main() {
    double x, y, result;
    //clrscr();

    // Input base (x) and exponent (y)
    printf("Enter the base (x): ");
    scanf("%lf", &x);

    printf("Enter the exponent (y): ");
    scanf("%lf", &y);

    // Calculate x raised to the power y
    result = pow(x, y);

    // Output the result
    printf("%.2lf raised to the power %.2lf is: %.2lf\n", x, y, result);

    return 0;
}

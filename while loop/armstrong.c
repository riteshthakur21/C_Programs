#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0, n = 0;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Count the number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    // Calculate sum of nth power of each digit
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;  // Extract last digit
        result += pow(remainder, n); // Add digit^n to result
        temp /= 10;  // Remove last digit
    }

    // Check if Armstrong
    if (result == originalNum)
        printf("%d is an Armstrong number.\n", originalNum);
    else
        printf("%d is not an Armstrong number.\n", originalNum);

    return 0;
}

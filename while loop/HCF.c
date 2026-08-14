#include <stdio.h>

// Function to calculate HCF using Euclidean algorithm
int hcf(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num, hundreds, tens, units;
    
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    
    // Validate input
    if (num < 100 || num > 999) {
        printf("Invalid input. Please enter a three-digit number.\n");
        return 1;
    }
    
    // Extract digits
    hundreds = num / 100;
    tens = (num / 10) % 10;
    units = num % 10;
    
    // Calculate HCF of the digits
    int hcf_step = hcf(hundreds, tens);
    int final_hcf = hcf(hcf_step, units);
    
    printf("HCF of the digits %d, %d, and %d is: %d\n", 
           hundreds, tens, units, final_hcf);
    
    return 0;
}
#include <stdio.h>  

int isEven(int num) {  
    return (num & 1) ? 0 : 1; // Bitwise AND with 1  
}  

int main() {  
    int num;  
    printf("Enter an integer: ");  
    scanf("%d", &num);
    printf("%d is %s", num, isEven(num) ? "Even" : "Odd");  
    return 0;  
}  
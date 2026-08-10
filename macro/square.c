#include <stdio.h>  
#define SQUARE(x) ((x) * (x))  

int main() {  
    int num = 5;  
    printf("Square of %d: %d", num, SQUARE(num));  
    return 0;  
}  
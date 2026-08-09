//dynamic memory allocation
#include <stdio.h>  
#include <stdlib.h>  

int main() {  
    int n, sum = 0;  
    printf("Enter array size: ");  
    scanf("%d", &n);  

    int *arr = (int*)malloc(n * sizeof(int));  
    if (arr == NULL) {  
        printf("Memory allocation failed!");  
        return 1;  
    }  

    printf("Enter %d integers: ", n);  
    for (int i = 0; i < n; i++) {  
        scanf("%d", &arr[i]);  
        sum += arr[i];  
    }  

    printf("Sum: %d", sum);  
    free(arr);  
    return 0;  
}  
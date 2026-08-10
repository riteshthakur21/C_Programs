#include <stdio.h>  
#include <stdlib.h>  

struct Student {  
    int roll_no;  
    char name[50];  
    float marks;  
};  

int main() {  
    struct Student s = {101, "Alice", 95.5};  

    // Write to file  
    FILE *file = fopen("students.dat", "wb");  
    if (file == NULL) {  
        printf("File error!");  
        return 1;  
    }  
    fwrite(&s, sizeof(struct Student), 1, file);  
    fclose(file);  

    // Read from file  
    file = fopen("students.dat", "rb");  
    struct Student read_s;  
    fread(&read_s, sizeof(struct Student), 1, file);  
    printf("\nRoll: %d \nName: %s \nMarks: %.2f", read_s.roll_no, read_s.name, read_s.marks);  
    fclose(file);  

    return 0;  
}  
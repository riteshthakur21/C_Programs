/*#include<stdio.h>

struct stud
{
    int roll,fee;
    char name[20], prog[10];
};
void main()
{
    struct stud s;
    printf("\nEnter roll no:");
    scanf("%d",&s.roll);
    printf("\nEnter your name and programe: ");
    scanf("%s%s",s.name, s.prog);
    printf("\nEnter your fee");
    scanf("%d",&s.fee);
    printf("\nRoll=%d \nName=%s \nPrograme=%s \nName=%s", s.roll, s.name, s.prog,s.fee);
    
}*/

#include<stdio.h>

struct stud
{
    int roll, fee;
    char name[20], prog[10];
};

int main()  // Changed to standard main declaration
{
    struct stud s;
    
    printf("\nEnter roll no:");
    scanf("%d", &s.roll);
    
    printf("\nEnter your name and program: ");
    scanf("%19s %9s", s.name, s.prog);  // Added width specifiers
    
    printf("\nEnter your fee: ");
    scanf("%d", &s.fee);
    
    // Corrected format string and variable order
    printf("\nRoll=%d \nName=%s \nProgram=%s \nFee=%d", 
           s.roll, s.name, s.prog, s.fee);
    
    return 0;
}
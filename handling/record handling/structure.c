/*#include<stdio.h>
#include<conio.h>
struct stud;
{
    int roll;
    char name[20], prog[10];
};
void main()
{
    FILE *fp;
    struct stud r;
    printf("\nEnter your roll, name and programe:");
    scanf("%d%s%s",&r.roll, r.name, r.prog);
    fp=fopen("stud_data.txt","a");
    fwrite(&r,sizef(r),1,fp);
    fclose(fp);
    fp=fopen("stud_data.txt","r");
    printf("\nRoll \tNmae \t\tPrograme");
    {
        printf("\n%d\t%s\t\t%s",r.roll, r.name, r.prog);
    }
    fclose(fp);
    getch();
}*/

#include<stdio.h>
#include<conio.h>  // Required for getch()

struct stud  // Removed erroneous semicolon
{
    int roll;
    char name[20], prog[10];
};

int main()  // Changed to standard main declaration
{
    FILE *fp;
    struct stud r;
    
    // Input with size limits
    printf("\nEnter your roll, name and programme: ");
    scanf("%d %19s %9s", &r.roll, r.name, r.prog);
    
    // File writing
    fp = fopen("stud_data.txt", "a");
    if(fp == NULL) {
        printf("\nError opening file for writing!");
        return 1;
    }
    fwrite(&r, sizeof(r), 1, fp);  // Fixed sizeof spelling
    fclose(fp);
    
    // File reading
    fp = fopen("stud_data.txt", "r");
    if(fp == NULL) {
        printf("\nError opening file for reading!");
        return 1;
    }
    
    printf("\nRoll \tName \tProgramme");  // Fixed typos
    
    // Read and display all records
    while(fread(&r, sizeof(r), 1, fp) == 1) {
        printf("\n%d\t%-20s\t%-10s", r.roll, r.name, r.prog);
    }
    
    fclose(fp);
    getch();  // Pause before exit
    return 0;
}
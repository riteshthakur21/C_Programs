/*#include<stdio.h>
void main()
{
    int i;
    FILE *Fp;
    fe=Fopen("alpha.txt""w");
    for(i=97; i<122; i++)
    {
        fputch(i,fp);
    }
    fclose(fp);
}*/

#include<stdio.h>

int main()
{
    int i;
    FILE *fp;
    
    fp = fopen("alpha.txt", "w");
    
    if(fp == NULL) {
        printf("Error opening file!");
        return 1;
    }
    
    // Changed ASCII range for uppercase letters (A-Z)
    for(i = 65; i <= 90; i++)  // ASCII 65='A', 90='Z'
    {
        fputc(i, fp);
    }
    
    fclose(fp);
    printf("Uppercase letters written to file successfully!");
    return 0;
}
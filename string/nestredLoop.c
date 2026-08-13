#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    //clrscr();
    for(i=1; j<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    getch();
    
}

/*#include<stdio.h>

void main()
{
    int i, j; // Declare i and j
    for(i=1; i<=5; i++) // Outer loop for rows
    {
        for(j=1; j<=i; j++) // Inner loop for columns
        {
            printf("%d", i); // Print the value of i
        }
        printf("\n"); // Move to the next line after each row
    }

    getch(); // Wait for user input before closing the program
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
    int n1, n2;
    char ch;
    //clrscr();
    printf("\nEnter two numbers: ");
    scanf("%d %d", &n1, &n2);
    printf("1. ADDITION\n2. SUBTRACTION\n3. MULTIPLICATION\n4. DIVISION\n");
    printf("Enter your choice: ");
    ch = getche();
    switch (ch)
    {
    case '1':
        printf("\nAddition of %d and %d is %d", n1, n2, n1+n2);
        break;

    case '2': 
        printf("\nDIFFERENCE of %d and %d is %d", n1, n2, n1-n2);
        break;

    case '3':
        printf("\nMULTIPLICATION of %d and %d is %d", n1, n2, n1*n2);
        break;

    case '4':
        printf("\nDIVISION of %d and %d is %d", n1, n2, n1/n2);
        break;
    
    default:
        printf("\nInvalid choice\ntry again");
       
    
    }
    getch();
}*/

#include <stdio.h>
#include <conio.h>

int main() 
{
    int n1, n2;
    char ch;

    // clrscr(); 

    printf("\nEnter two numbers: ");
    scanf("%d %d", &n1, &n2);

    printf("\n1. ADDITION\n2. SUBTRACTION\n3. MULTIPLICATION\n4. DIVISION\n");
    printf("Enter your choice: ");
    ch = getche();  

    switch (ch) 
    {
        case '1':
            printf("\nAddition of %d and %d is %d", n1, n2, n1 + n2);
            break;

        case '2':
            printf("\nDifference of %d and %d is %d", n1, n2, n1 - n2);
            break;

        case '3':
            printf("\nMultiplication of %d and %d is %d", n1, n2, n1 * n2);
            break;

        case '4':
            if (n2 != 0)
                printf("\nDivision of %d and %d is %d", n1, n2, n1 / n2);
            else
                printf("\nError: Division by zero is not allowed.");
            break;
    
        default:
            printf("\nInvalid choice. Try again.");
    }

    getch();  
    //return 0;
}

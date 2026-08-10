#include<stdio.h>
#include<conio.h>
/*void main()
{
    int marks;
    char grade;

    printf("enter the marks of 5 paper: ");
    scanf("%d",&marks);
    
    if (marks < 0 || marks > 100) {
        printf("\nInvalid marks entered. Please enter a value between 0 and 100.");
    }
        else{
            if(marks>= 90){
               grade = 'a'; 
            } else if (marks>= 80){
                grade = 'b';
            } else if (marks>= 70){
                grade = 'c';            
            } else if (marks>= 60){
                grade = 'd';            
            } else if (marks>= 50){
                grade = 'e';            
            } else {
                grade = 'f';
            }
            
            printf("\nyour grade is %c",&grade);
        }
    
}


int main() {
    int marks;
    char grade;

    // Input marks
    printf("Enter the marks (0-100): ");
    scanf("%d", &marks);

    // Check for valid marks
    if (marks < 0 || marks > 100) {
        printf("Invalid marks entered. Please enter a value between 0 and 100.\n");
    } else {
        // Determine grade based on marks
        if (marks >= 90) {
            grade = 'A';
        } else if (marks >= 80) {
            grade = 'B';
        } else if (marks >= 70) {
            grade = 'C';
        } else if (marks >= 60) {
            grade = 'D';
        } else if (marks >= 50) {
            grade = 'E';
        } else {
            grade = 'F';
        }

        // Output the grade
        printf("Your grade is: %c\n", grade);
    }

    return 0;
}*/

void main()
{
    double p1,p2,p3,p4,p5,grade,marks;
    printf("\nEnter the marks of five Paper: ")
    scanf("%lf,%lf,%lf,%lf,%lf",&p1,&p2,&p3,&p4,&p5);
    
}

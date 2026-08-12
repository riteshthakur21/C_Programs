#include <stdio.h>
int main() 
{
    int marks[5], total = 0;
    float avg;
    printf("Enter marks for 5 subjects: ");
    for(int i=0; i<5; i++) 
    {
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    avg = total / 5.0;
    printf("Average: %.2f\nGrade: ", avg);
    if(avg >= 90) printf("A");
    else if(avg >= 80) printf("B");
    else if(avg >= 70) printf("C");
    else if(avg >= 60) printf("D");
    else printf("F");
    return 0;
}

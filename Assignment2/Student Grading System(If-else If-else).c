#include <stdio.h>

int main()
{
    int n, i;
    int regNo, marks;
    char name[50];
    char grade;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("\nEnter details for Student %d\n", i);

        printf("Registration Number: ");
        scanf("%d", &regNo);

        printf("Name: ");
        scanf(" %49[^\n]", name);

        printf("Marks: ");
        scanf("%d", &marks);

        // Determine grade using if-else statements
        if(marks >= 70 && marks <= 100)
        {
            grade = 'A';
        }
        else if(marks >= 60 && marks <= 69)
        {
            grade = 'B';
        }
        else if(marks >= 50 && marks <= 59)
        {
            grade = 'C';
        }
        else if(marks >= 40 && marks <= 49)
        {
            grade = 'D';
        }
        else
        {
            grade = 'F';
        }

        // Display student information
        printf("\n----------------------------------------\n");
        printf("         STUDENT INFORMATION\n");
        printf("----------------------------------------\n");

        printf("Registration No: %d\n", regNo);
        printf("Name            : %s\n", name);
        printf("Marks           : %d\n", marks);
        printf("Grade           : %c\n", grade);

        // Determine pass or fail
        if(marks >= 40 && marks <= 100)
        {
            printf("Status          : PASSED\n");
        }
        else
        {
            printf("Status          : FAILED\n");
        }

        printf("----------------------------------------\n");
    }

    return 0;
}

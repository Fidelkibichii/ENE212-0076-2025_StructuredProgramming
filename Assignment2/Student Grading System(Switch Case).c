
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

        // Determine grade using switch-case
        switch(marks / 10)
        {
            case 10:
            case 9:
            case 8:
            case 7:
                grade = 'A';
                break;

            case 6:
                grade = 'B';
                break;

            case 5:
                grade = 'C';
                break;

            case 4:
                grade = 'D';
                break;

            default:
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
        switch(marks >= 40 && marks <= 100)
        {
            case 1:
                printf("Status          : PASSED\n");
                break;

            case 0:
                printf("Status          : FAILED\n");
                break;
        }

        printf("----------------------------------------\n");
    }

    return 0;
}

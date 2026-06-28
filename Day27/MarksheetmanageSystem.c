#include <stdio.h>

int main()
{
    char name[50];
    int roll, marks[5], total = 0;
    float percentage;
    char grade;
    
    printf("===== Marksheet Generation System =====\n\n");

    printf("Enter Student Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("\nEnter marks of 5 subjects:\n");

    for(int i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        if(marks[i] < 0 || marks[i] > 100)
        {
            printf("Invalid marks entered!");
            return 0;
        }

        total += marks[i];
    }

    percentage = total / 5.0;

    // Grade calculation
    if(percentage >= 90)
        grade = 'A';
    else if(percentage >= 80)
        grade = 'B';
    else if(percentage >= 70)
        grade = 'C';
    else if(percentage >= 60)
        grade = 'D';
    else
        grade = 'F';

    // Display Marksheet
    printf("\n\n========== MARKSHEET ==========\n");
    printf("Student Name : %s\n", name);
    printf("Roll Number  : %d\n", roll);

    printf("\nSubject Marks:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("Subject %d : %d\n", i + 1, marks[i]);
    }

    printf("\nTotal Marks  : %d / 500\n", total);
    printf("Percentage   : %.2f%%\n", percentage);
    printf("Grade        : %c\n", grade);

    if(grade == 'F')
        printf("Result       : FAIL\n");
    else
        printf("Result       : PASS\n");

    printf("===============================\n");

    return 0;
}
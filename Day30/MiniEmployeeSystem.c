#include <stdio.h>

struct Employee
{
    int empId;
    char name[30];
    char department[30];
    float salary;
};

int main()
{
    struct Employee emp[10];
    int n, i;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].empId);

        printf("Employee Name: ");
        scanf("%s", emp[i].name);

        printf("Department: ");
        scanf("%s", emp[i].department);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\n----- Employee Records -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee ID : %d\n", emp[i].empId);
        printf("Name        : %s\n", emp[i].name);
        printf("Department  : %s\n", emp[i].department);
        printf("Salary      : %.2f\n", emp[i].salary);
    }

    return 0;
}
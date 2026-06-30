#include <stdio.h>

struct Employee
{
    int id;
    char name[20];
};

struct Employee emp[5];
int n, i;

void addEmployee()
{
    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &emp[i].id);

        printf("Name: ");
        scanf("%s", emp[i].name);
    }
}

void displayEmployee()
{
    printf("\nEmployee Records\n");

    for(i = 0; i < n; i++)
    {
        printf("\nID: %d", emp[i].id);
        printf("\nName: %s\n", emp[i].name);
    }
}

int main()
{
    addEmployee();
    displayEmployee();

    return 0;
}
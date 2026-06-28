#include <stdio.h>

struct employee {
int id;
char name [50];
float salary ;
};
int main(){
    struct employee e;
    printf("Enter employee id :");
    scanf("%d",&e.id);

    printf("Enter employee name :");
    scanf("  %[^\n]",e.name);

    printf("Enter Salary :");
    scanf("%f",&e.salary);
    printf("\n-------employee details ------\n");
    printf("employee id :%d\n ",e.id);
    printf("Name : %s\n",e.name);
    printf("salary :%.2f\n",e.salary);

    return 0;


}
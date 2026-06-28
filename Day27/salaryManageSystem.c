#include <stdio.h>
int main(){
    char name[50];
    float basic ,hra ,da,gross;

    printf("Enter employee name :");
    scanf("  %[^\n]",name);

    printf("Enter basic salary :");
    scanf("%f",&basic);

    hra =basic *0.20;
    da =basic *0.10;
    gross =basic +hra +da;

    printf("\n-------salary slip -----\n");

    printf("employee name  :%s\n ",name);
    printf("basic salary  :%.2f\n",basic);
    printf("hra  :%.2f\n",hra);
    printf("da  :%.2f\n",da);
    printf("gross salary  :%.2f\n",gross);

    return 0;


}
#include<stdio.h>

struct student {
    int roll ;
    char name ;
    float marks ;

};
int main(){
    struct student s;
    printf('Enter roll number :');
    scanf("%d",&s.roll);

    printf("Enter Name:");
    scanf("%[^\n]",s.name);
    
    printf("Enter the marks :\n");
    scanf("%d",&s.marks);

    printf("\n---------student Record ------\n");
    printf("roll number :%d\n",s.roll);
    printf("Name         : %s\n",s.name);
    printf("marks        : %2f\n",s.marks);

    return 0;



}
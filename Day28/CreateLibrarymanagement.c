#include <stdio.h>

struct Book
{
    int id;
    char name[30];
};

int main()
{
    struct Book b[50];
    int n, i, search;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Book ID: ");
        scanf("%d", &b[i].id);

        printf("Enter Book Name: ");
        scanf("%s", b[i].name);
    }

    printf("\n--- Book Records ---\n");
    for(i = 0; i < n; i++)
    {
        printf("\nID: %d  Name: %s", b[i].id, b[i].name);
    }

    printf("\n\nEnter Book ID to search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++)
    {
        if(b[i].id == search)
        {
            printf("Book Found: %s", b[i].name);
            return 0;
        }
    }

    printf("Book not found");

    return 0;
}
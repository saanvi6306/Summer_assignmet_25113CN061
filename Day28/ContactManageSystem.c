#include <stdio.h>

struct Contact
{
    char name[30];
    char phone[15];
};

int main()
{
    struct Contact c[10];
    int n, i;

    printf("Enter number of contacts: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter Name: ");
        scanf("%s",c[i].name);

        printf("Enter Phone: ");
        scanf("%s",c[i].phone);
    }

    printf("\n--- Contact List ---");
    for(i=0;i<n;i++)
    {
        printf("\nName: %s  Phone: %s", c[i].name, c[i].phone);
    }

    return 0;
}
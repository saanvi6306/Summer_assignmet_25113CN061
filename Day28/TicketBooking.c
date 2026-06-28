#include <stdio.h>

int main()
{
    char name[30];
    int ticket, price = 100;

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Number of Tickets: ");
    scanf("%d", &ticket);

    printf("\n--- Ticket Details ---");
    printf("\nName: %s", name);
    printf("\nTickets: %d", ticket);
    printf("\nTotal Price: %d", ticket * price);

    printf("\nBooking Successful!");

    return 0;
}
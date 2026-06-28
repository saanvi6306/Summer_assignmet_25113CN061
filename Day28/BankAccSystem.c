#include <stdio.h>

int main()
{
    int acc, choice;
    float bal, amt;

    printf("Enter Account No: ");
    scanf("%d",&acc);

    printf("Enter Balance: ");
    scanf("%f",&bal);

    printf("1.Deposit  2.Withdraw  3.Check Balance\n");
    scanf("%d",&choice);

    if(choice==1)
    {
        printf("Enter amount: ");
        scanf("%f",&amt);
        bal += amt;
    }
    else if(choice==2)
    {
        printf("Enter amount: ");
        scanf("%f",&amt);
        bal -= amt;
    }

    printf("Account No: %d\nBalance: %.2f", acc, bal);

    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int ch;

    printf("Enter a string: ");
    gets(str);

    printf("\n1.Length\n2.Reverse\n3.Uppercase\nEnter choice: ");
    scanf("%d", &ch);

    switch(ch) {
        case 1:
            printf("Length = %d", strlen(str));
            break;

        case 2:
            strrev(str);
            printf("Reverse = %s", str);
            break;

        case 3:
            printf("Uppercase = %s", strupr(str));
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
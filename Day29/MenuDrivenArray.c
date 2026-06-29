#include <stdio.h>

int main() {
    int a[20], n = 0, i, ch, item, pos;

    do {
        printf("\n1.Insert\n2.Display\n3.Search\n4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1:
                printf("Enter element: ");
                scanf("%d", &a[n]);
                n++;
                break;

            case 2:
                printf("Array: ");
                for(i = 0; i < n; i++)
                    printf("%d ", a[i]);
                break;

            case 3:
                printf("Enter element to search: ");
                scanf("%d", &item);
                for(i = 0; i < n; i++) {
                    if(a[i] == item) {
                        printf("Found at position %d", i + 1);
                        break;
                    }
                }
                if(i == n)
                    printf("Element not found");
                break;

            case 4:
                printf("Exit");
                break;

            default:
                printf("Invalid choice");
        }
    } while(ch != 4);

    return 0;
}
#include <stdio.h>
int main (){
    int n, i, search, a[100];
    printf("Enter number of elements : ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the number to search: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++) {
        if (a[i] == search) {
            printf("%d is present at location %d.\n", search, i + 1);
            break;
        }
    }

    if (i == n)
        printf("%d isn't present in the array.\n", search);
    return 0;
}
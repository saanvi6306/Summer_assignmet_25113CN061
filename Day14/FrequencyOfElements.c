#include <stdio.h>
int main() {
    int n, i, a[100], count[100] = {0};
    
    printf("Enter number of elements : ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++) {
        count[a[i]]++;
    }

    printf("Element\tFrequency\n");
    for (i = 0; i < n; i++) {
        if (count[a[i]] != 0) {
            printf("%d\t%d\n", a[i], count[a[i]]);
            count[a[i]] = 0; 
        }
    }
    return 0;
}
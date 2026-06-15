#include <stdio.h>
int main() {
    int a[] = {1 ,2 ,3,4 ,5};
    int n = sizeof(a) / sizeof(a[0]);
    int first = a[0];
    for (int i = 0; i < n - 1; i++) {
        a[i] = a[i + 1];

    }
    a[n - 1] = first;
    printf("Array after left rotation is : \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
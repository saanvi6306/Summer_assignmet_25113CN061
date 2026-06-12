#include <stdio.h>
void fibo(int n) {
    int a = 0, b = 1, c;
    printf("Fibonacci series up to %d: ", n);
    
    while (a <= n) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    fibo(n);
    return 0;
}
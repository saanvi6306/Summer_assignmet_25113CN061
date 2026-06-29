#include <stdio.h>

int main() {
    int ch;
    float a, b;

    printf("1.Add\n2.Sub\n3.Mul\n4.Div\nEnter choice: ");
    scanf("%d", &ch);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (ch) {
        case 1: printf("Result = %.2f", a + b); break;
        case 2: printf("Result = %.2f", a - b); break;
        case 3: printf("Result = %.2f", a * b); break;
        case 4:
            if (b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Division by zero not allowed");
            break;
        default: printf("Invalid choice");
    }

    return 0;
}
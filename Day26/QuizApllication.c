#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("Simple Quiz\n");

    printf("\n1. What is 2 + 2?\n");
    printf("1. 3\n2. 4\n3. 5\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
        score++;

    printf("\n2. Capital of India?\n");
    printf("1. New Delhi\n2. Mumbai\n3. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 1)
        score++;

    printf("\nYour Score = %d/2\n", score);

    return 0;
}
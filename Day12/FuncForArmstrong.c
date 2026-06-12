#include <stdio.h>
#include <math.h>
int arms(int n){
    int sum = 0, temp, d = 0;
    temp = n;
    while (temp != 0) {
        d++;
        temp /= 10;
    }
    temp = n;
    while (temp != 0) {
        int d = temp % 10;
        sum += pow(d, d);
        temp /= 10;
    }
    return sum == n;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (arms(n)) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }
    return 0;
}
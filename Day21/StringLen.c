#include <stdio.h>
#include<string.h>

int main() {
    char str[100];
    int i =0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while( str[i] != '\0') {
        i++;
    }

    printf("Length of the string is: %lu\n", strlen(str));
    return 0;
}
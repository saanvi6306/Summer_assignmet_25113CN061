#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int freq[256] = {0}, i, max = 0;
    char ch;

    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++){
        freq[(unsigned char)str[i]]++;
    }

    for(i = 0; i < 256; i++){
        if(freq[i] > max){
            max = freq[i];
            ch = (char)i;
        }
    }

    printf("The character that occurs most frequently is '%c' with %d occurrences.\n", ch, max);
    return 0;
}
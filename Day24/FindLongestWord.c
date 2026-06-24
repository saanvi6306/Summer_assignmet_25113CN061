#include <stdio.h>
#include <string.h>

int main(){
    char str [200] ,longest[200];
    int  maxlen =0;

    printf( "Enter a sentence :");
    fgets(str, sizeof(str), stdin);

    char *word = strtok(str, " \n");
    while(word != NULL){
        int len = strlen(word);
        if(len > maxlen){
            maxlen = len;
            strcpy(longest, word);
        }
        word = strtok(NULL, " \n");
    }
    printf("The longest word is: %s\n", longest);
    return 0;
}
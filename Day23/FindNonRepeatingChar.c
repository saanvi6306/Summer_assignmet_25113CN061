#include <string.h>
#include <stdio.h>

int main(){
    char str[100];
    int i, j, flag;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++){
        flag = 0;
        for(j = 0; str[j] != '\0'; j++){
            if(str[i] == str[j] && i != j){
                flag = 1;
                break;
            }
        }
        if(flag == 0 && str[i] != '\n'){
            printf("The first non-repeating character is: %c\n", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found.\n");
    return 0;
}
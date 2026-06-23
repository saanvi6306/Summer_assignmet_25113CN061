#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int i ,j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++){
        for(j = 0; str[j] != '\0'; j++){
            
            
        
        if(str[i] == str[j] && i != j && str[i] != '\n'){
            printf("The first repeating character is: %c\n", str[i]);
            return 0;
        }
    }
        }
    
    printf("No repeating character found.\n");
    return 0;
}
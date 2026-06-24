#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int visited [256];

    printf("Enter a string: ");
    scanf("%s", str);

    for(int i =0 ;str[i] != '\0'; i++){
         if (!visited[(int)(str[i])]){ 
            printf("%c", str[i]);
            visited[str[i]] = 1;
        }
    }
    return 0;



}
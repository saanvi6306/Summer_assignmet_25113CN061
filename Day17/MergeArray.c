#include <stdio.h>
int main(){
    int a1[5] = {1, 2, 3, 4, 5};
    int a2[5] = {6, 7, 8, 9, 10};

    int merged[10];  
    for(int i = 0; i < 5; i++){
        merged[i] = a1[i];
    }
    for(int i = 0; i < 5; i++){
        merged[i + 5] = a2[i];
    }
    printf("Merged Array: ");
    for(int i = 0; i < 10; i++){
        printf("%d ", merged[i]);
    }
    
    return 0;
}
#include <stdio.h>
int main(){
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {4, 5, 6, 7,};
    int unionArray[10];
    int k = 0;
    for(int i = 0; i < 5; i++){
        unionArray[k++] = a[i];
    }
    for(int i = 0; i < 5; i++){
        int found = 0;
        for(int j = 0; j < 5; j++){
            if(b[i] == a[j]){
                found = 1;
                break;
            }
        }
        if(!found){
            unionArray[k++] = b[i];
        }
    }
    printf("Union Array: ");
    for(int i = 0; i < k; i++){
        printf("%d ", unionArray[i]);
    }
    return 0;
}
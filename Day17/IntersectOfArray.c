#include <stdio.h>
int main(){
    int a[50] = {1, 2, 3, 4, 5};
    int b[50] = {4, 5, 6, 7,8};
    int intersectArray[50];
    int k = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(a[i] == b[j]){
                intersectArray[k++] = a[i];
                break;
            }
        }
    }
    printf("Intersect Array: ");
    for(int i = 0; i < k; i++){
        printf("%d ", intersectArray[i]);
    }
    return 0;
}

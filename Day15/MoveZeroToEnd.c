#include <stdio.h>
int main (){
    int a[] ={1 , 0 , 2 , 0 , 3 , 0 , 4 , 5};
    int n = sizeof(a) / sizeof(a[0]);
    int j=0;
    for (int i=0;i<n;i++){
        if (a[i] != 0){
            a[j++] = a[i];
        }
    }
    while (j < n) {
        a[j++] = 0;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
#include <stdio.h>
int main(){
    int n, i, j, temp , minindex;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n-1; i++){
        minindex =i;
        for(j = i +1; j < n; j++){
            if(a[j] < a[minindex]){
                minindex = j;
            }
        }
            temp = a[i];
            a[i] = a[minindex];
            a[minindex] = temp;
    }


    printf("Sorted array: \n");
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
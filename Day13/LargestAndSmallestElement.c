#include <stdio.h>
int main (){
    int arr[100];
    int n, i;
    int large, small;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the %d elements: \n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    large = small = arr[0]; 

    for(i = 1; i < n; i++){
        if(arr[i] > large){
            large = arr[i];
        }
        if(arr[i] < small){
            small = arr[i];
        }
    }

    printf("The largest element in the array is: %d\n", large);
    printf("The smallest element in the array is: %d\n", small);

    return 0;
}
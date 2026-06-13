#include <stdio.h>
int main (){
    int arr[100];
    int n, i;
    int even =0 ,odd = 0;

    printf("Enter the number of elements :");
    scanf("%d", &n);

    printf("Enter the %d elements: \n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            even++;
        } else {
            odd++;
        }
    }

    printf("The number of even elements  is: %d\n", even);
    printf("The number of odd elements  is: %d\n", odd);

    return 0;
}
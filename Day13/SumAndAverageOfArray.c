#include <stdio.h>
int main(){
    int arr[100];
    int n, i;
    int sum = 0;
    float average;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the %d elements: \n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i]; 
    }

    average = (float)sum / n; 

    printf("The sum of the array is: %d\n", sum);
    printf("The average of the array is: %.2f\n", average);

    return 0;
}
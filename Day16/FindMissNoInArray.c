#include <stdio.h>
int main()
{
    int n, i, sum = 0 ;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int a[n - 1];
    printf("Enter %d numbers (from 1 to %d): ", n-1, n);
    
    for(i = 0; i < n-1; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    
      int total = n * (n + 1) / 2; 
    
    
    printf(" missing number is: %d\n", total - sum);
    
    return 0;
}
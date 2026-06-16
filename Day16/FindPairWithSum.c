#include <stdio.h>
int main(){
    int n , i ,j , sum;

    printf("Enter size :");
    scanf("%d", &n);

    int a[n];
    for(i =0 ; i <n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &a[i]);
    }


    printf("Enter the target sum : ");
    scanf("%d", &sum);
    
    for(i =0 ; i <n; i++){
        for(j =i+1 ; j <n; j++){
            if(a[i] + a[j] == sum)
            printf("Pair found: %d and %d\n", a[i], a[j]);
        }
    }
    return 0;
}
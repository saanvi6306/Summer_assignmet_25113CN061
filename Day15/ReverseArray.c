#include <stdio.h>
int main (){
    int a[] = {1 , 2,3 , 4, 5 ,6};
    int n = sizeof(a) / sizeof(a[0]);

    for (int i=0;i<=n/2 ;i++){
        int temp = a[i-1];
        a[i-1] = a[n-i];
        a[n-i] = temp;

    }
    printf("Reversed array is : \n");
    for (int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;

}
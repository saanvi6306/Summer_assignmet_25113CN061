#include <stdio.h>
int main(){
    int n ,i ,j, count ,maxcount =0;

    printf("Enter size :");
    scanf("%d", &n);

    int a[n];
    for( i =0 ;i <n; i++)
    scanf("%d", &a[i]);

    for( i =0 ;i <n; i++){
        count =1;
        for( j =i+1 ;j <n; j++){
            if(a[i] == a[j])
            count++;
        }
        if(count > maxcount)
        maxcount = count;
    }
    printf("Maximum frequency is: %d\n", maxcount);
    return 0;
}
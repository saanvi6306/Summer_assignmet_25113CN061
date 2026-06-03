#include<stdio.h>
int main(){
    int initial,last,i,j,prime;
    printf("Enter the initial number :");
    scanf("%d", &initial);

    printf("Enter the last number :");
    scanf("%d", &last);

    printf("Prime numbers between %d and %d are:\n", initial , last);

    for(i= initial ;i <=last ;i++){
        if(i <=1)
        continue;

        prime = 1;
        for (j=2 ;j <=i/2 ; j++){
            if( i% j == 0){
                prime = 0;
                break;
            }
        }
        if(prime)
        printf(" %d " , i);

    }
    return 0;

}
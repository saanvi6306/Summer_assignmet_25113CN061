#include <stdio.h>
#include <math.h>

int main(){
    int binary, d=0, i=0,r;
    printf("Enter  a binary number :");
    scanf("%d",&binary);

    while(binary !=0){
        r =binary %10;
        d += r *pow(2,i);
        binary /=10;
        i++;
    }
    printf("Decimal =%d", d);
    return 0;
}

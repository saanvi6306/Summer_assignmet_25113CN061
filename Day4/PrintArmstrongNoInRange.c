#include <Stdio.h>
#include<math.h>
int main (){
    int start,end,n,temp,d,sum;

    printf("Enter start and end of range :");
    scanf("%d %d",&start ,&end);

    printf("Armstrong numbers are :\n");
    for (n = start ;n<=end ;n++){
        temp = n;
        sum =0;
        while (temp !=0){
            d= temp %10;
            sum = sum + (d *d*d);
            temp = temp/10;
        }
        if(sum == n)
        printf("%d ",n);
    }
    return 0;

}
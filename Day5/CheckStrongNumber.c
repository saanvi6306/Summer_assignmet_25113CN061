#include <stdio.h>
int main(){
    int n, temp,d;
    int sum =0;
    printf("Enter a number :");
    scanf("%d",&n);

    temp = n;
    while(temp >0){
        d = temp% 10;
        int fact = 1;
        for(int i =1; i <=d ; i++){
            fact *= i;
        }
        sum += fact ;
        temp /= 10;

    }
    if(sum == n)
    printf("%d is strong number \n",n);
    else 
    printf("%d is not strong number \n",n);

    return 0;
}
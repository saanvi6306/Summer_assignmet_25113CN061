#include<stdio.h>
//using recursion
int gcd (int a, int b){
    if (b == 0)
    return a;
    return gcd(b,a%b);
}
int main(){
    int a,b;
    printf("Enter Two numbers :\n");
    scanf("%d %d", &a ,&b);

    printf("GCD = %d\n" , gcd(a ,b));
    return 0;
}
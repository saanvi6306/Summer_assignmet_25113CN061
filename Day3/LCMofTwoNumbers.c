#include <stdio.h>
//using function
int gcd(int a ,int b){
    while(b !=0){
        int temp = b;
        b = a %b;
        a = temp;
    }
    return a;

}
int main(){
    int a,  b,LCM;
    printf("Enter two numbers :");
    scanf("%d %d",&a ,&b);

    LCM =(a * b)/gcd(a,b);
    printf("LCM = %d" ,LCM);
    return 0;

}
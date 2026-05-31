#include <stdio.h>
// using recursion
int gcd (int a, int b)
{
    if(b ==0)
    return a;
 }

int main()
{
    int a,b ,LCM ;

    printf("Enter Two numbers :");
    scanf("%d %d " ,&a ,&b);

    LCM =(a*b)/gcd(a,b);
    printf("LCM of %d and %d = %d" ,a ,b,LCM);

    return 0;


}
 
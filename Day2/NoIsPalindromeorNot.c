#include <stdio.h>
int main (){
    int n , temp ,rev = 0,d ;
    printf("Enter a number :");
    scanf("%d",&n);
    temp =n;
    while(n !=0){
        d = n%10 ;
        rev = rev * 10 + d;
        n = n /10;
    }
    if(temp == rev)
       printf("palindrome Number ");
       else
          printf("Not a palindrome Number ");
        
    return 0;

}
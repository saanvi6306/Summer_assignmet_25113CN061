#include <stdio.h>
#include <string.h>
int palin(char str[])
{
    int i, j;
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            return 0; 
        }
    }
    return 1; 
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if (palin(str))
    {
        printf("%s is a palindrome.\n", str);
    }
    else
    {
        printf("%s is not a palindrome.\n", str);
    }
    return 0;
}
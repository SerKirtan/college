//Reverse a string
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];

    printf("Enter  the string : ");
    gets(s);
    printf("Reversed string   : ");
    printf("%s",strrev(s));
    return 0;
}

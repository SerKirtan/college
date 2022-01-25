//Change lower to upper case
#include<stdio.h>
#include<ctype.h>
int main()
{
    char s[100];
    int i;

    printf("Enter  the string : ");
    gets(s);
    for(i=0;i<100;i++)
    {
        s[i]=toupper(s[i]);// For lower use :- s[i]=tolower(s[i])
    }
    printf("%s",s);
    return 0;
}

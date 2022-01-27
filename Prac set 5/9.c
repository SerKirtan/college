//Change lower to upper case using functions
#include<stdio.h>
#include<ctype.h>
void fun(char s[100])
{
    int i;
    printf("\n[ %s ] in upper is : ",s);
    for(i=0;i<100;i++)
    {
        s[i]=toupper(s[i]);
    }
    printf("%s\n",s);
}
int main()
{
    char s[100];
    printf("Enter  the string : \n");
    gets(s);
    fun(s);
    return 0;
}

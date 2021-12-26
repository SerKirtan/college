//WAP to check if the entered character is Uppercase, lowercase, digit or a special character

#include<stdio.h>
#include<ctype.h>

int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);

    if(c >= 'A' && c <= 'Z' )
        printf("'%c' is an uppercase letter.\n",c);

    else if(c >= 'a' && c <= 'z')
        printf("%c' is an lowercase letter.\n",c);

    else if(c >= '0' && c <= '9')
        printf("%c' is a Digit.\n",c);

    else printf("'%c' is a Special Character.\n",c);

    return 0;
}

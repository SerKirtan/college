// write a string in file
#include<stdio.h>
#include<string.h>
void main()
{
    FILE *fptr;
    char s[20];
    printf("Enter string\n");
    gets(s);
    fptr= fopen("1st prog.txt","w");
    if(fptr==0)
        printf("File error");
    else
    {
        fputs(s,fptr);
    }
    fclose(fptr);
}

//To print contents of file
#include<stdio.h>
void main()
{
    char str[20];
    FILE *fptr=fopen("4.txt","r");
    while(!(feof(fptr)))
    {
        fgets(str,20,fptr);      
        printf("%s",str);
    }
    fclose(fptr);
}

//to copy contents of one file to another
#include<stdio.h>
void main()
{
    char str[20];
    FILE *f1=fopen("5.1.txt","r");
    FILE *f2=fopen("5.2.txt","w");
    while(!(feof(f1)))
    {
        fgets(str,20,f1);
        fputs(str,f2);
    }
    fclose(f1);
    fclose(f2);
    f2=fopen("5.2.txt","r");
    printf("Contents of file 2 is :\n");
     while(!(feof(f2)))
    {
        fgets(str,20,f2);      
        printf("%s",str);
    }
    fclose(f2);
}

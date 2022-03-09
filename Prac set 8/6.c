//to merge contents of two files into a third 
#include<stdio.h>
void main()
{
    char str[20];
    FILE *f1=fopen("6.1.txt","r");
    FILE *f2=fopen("6.2.txt","r");
    FILE *f3=fopen("6.3.txt","w");
    while(!(feof(f1)))
    {
        fgets(str,20,f1);
        fputs(str,f3);
    }
    fclose(f1);
    while(!(feof(f2)))
    {
        fgets(str,20,f2);
        fputs(str,f3);
    }
    fclose(f2);
    fclose(f3);
    f3=fopen("6.3.txt","r");
    printf("Contents of merged file is :\n");
     while(!(feof(f3)))
    {
        fgets(str,20,f3);      
        printf("%s",str);
    }
    fclose(f3);
}

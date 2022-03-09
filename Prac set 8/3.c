//To count number of lines
#include<stdio.h>
void main()
{
    char ch;
    int count=1;
    FILE *f= fopen("3.txt","r");
    while((ch=fgetc(f))!=EOF)
        if(ch=='\n')
            ++count;
    fclose(f);
    printf("Number of lines in files are %d",count);
}

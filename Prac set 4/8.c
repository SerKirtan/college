//Find char from a given string
#include <stdio.h>
int main()
{
          char str[20],ch,flag=1;
          int i=0;
          printf("\n Enter String ");
          gets(str);
          printf("Enter Character to Search in String :");
          scanf("%c",&ch);
          printf("\n Character ");
          for(i=0;str[i]!='\0';i++)
          {
                   if(str[i]==ch)
                   {
                             printf(" %d ",i+1);
                             flag=0;
                   }
          }
          if(flag==1)
          {
                   printf("NOT FOUND");
          }
          return 0;
}

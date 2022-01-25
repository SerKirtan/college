//Delete a character from string
#include<stdio.h>
int main()
{
    char s[100],x;
    int  i,j;

    printf("Enter  the string : ");
    gets(s);

	printf("Enter a character to delete: ");
    x=getchar();
    printf("\n\tBefore deletion: %s",s);

    for(i=0;i<20;i++)
	{
		if(s[i]==x)
		{
		    for(j=i;j<20;j++)
            {
                s[j]=s[j+1];
            }
            i=i-1;
	    }
	}
    printf("\n\tAfter  deletion: %s",s);
    return 0;
}

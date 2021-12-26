//Reverse a number

#include <stdio.h>
int main()
{
    int n,i,count=1;
    printf("Enter a number\n");
    scanf("%d",&n);
    i=n;
    printf("Reverse of %d is ",i);
    while(i!=0)
    {
        n=i%10;
        i=i/10;
        printf("%d",n);
    }
    return 0;
}

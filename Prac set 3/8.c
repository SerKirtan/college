//Sum of 1/1 + 1/2 + 1/3 + ... + 1/n

#include <stdio.h>
int main()
{
    int n;
    float t=1,sum=0,i;
    printf("Enter a number\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        t=1/i;
        sum=sum+t;
    }
    printf("Sum upto %d terms is %.3f",n,sum);
    return 0;
}

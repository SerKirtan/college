//function to return 1 if number is prime otherwise return 0
#include <stdio.h>
int prime(int n)
{
    for(int i=2;i<n;i++)
        if(n%i==0)
            return 1;
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",prime(n));
    return 0;
}

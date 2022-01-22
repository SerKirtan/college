//function to return 1 if number is prime otherwise return 0
#include <stdio.h>
int prime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            return 1;
        else
            continue;
    }
    return 0;
}
int main()
{
    int a,n;
    scanf("%d",&a);
    printf("%d",prime(a));
    return 0;
}

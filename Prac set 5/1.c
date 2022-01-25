//Find sum of first n numbers using function
#include <stdio.h>
int fun(int n)
{
    int i=1,sum=0;
    for(;i<=n;i++)
        sum+=i;
    printf("Sum of first %d numbers is %d",n,sum);
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
    return 0;
}

/*RECURSIVE BELOW
#include <stdio.h>
int fun(int n)
{
    if(n==1)
        return 1;
    else
        return n + fun(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fun(n));
    return 0;
}*/

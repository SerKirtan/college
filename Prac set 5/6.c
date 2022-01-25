//sum of first 20 natural numbers using recursive function.
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
    printf("%d",fun(20));
    return 0;
}

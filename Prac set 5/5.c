//Facctorial using recursion 
#include <stdio.h>
int fun(int n)
{
    if(n==1)
        return 1;
    else
        return n * fun(n-1);
}
int main()
{
    int a,n;
    scanf("%d",&a);
    printf("%d",fun(a));
    return 0;
}

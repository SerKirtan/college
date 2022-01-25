//Interchange value of A and B
#include <stdio.h>
int fun(int n1, int n2)
{
    int c;
    c=n1;
    n1=n2;
    n2=c;
    printf("A=%d, B=%d",n1,n2);
}
int main()
{
    int n1,n2;
    printf("Enter two values A and B\n");
    scanf("%d %d",&n1,&n2);
    fun(n1,n2);
}

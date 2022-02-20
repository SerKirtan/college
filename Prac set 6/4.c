//Add two numbers using pointers
#include<stdio.h>
int add(int *n1,int *n2)
{
    return *n1+*n2;
}
void main()
{
    int n1,n2,sum;
    printf("Enter 2 numbers :\n");
    scanf("%d %d",&n1,&n2);
    printf("Sum is %d",add(&n1,&n2));
}

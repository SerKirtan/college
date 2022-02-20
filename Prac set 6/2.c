//Swap two values using pointers
#include<stdio.h>
swap(int *n1,int *n2)
{
    *n1=*n1+*n2;
    *n2=*n1-*n2;
    *n1=*n1-*n2;
}
void main()
{
    int n1,n2;
    printf("Enter 2 numbers X and Y :\n");
    scanf("%d %d",&n1,&n2);
    swap(&n1,&n2);
    printf("X=%d and Y=%d",n1,n2);
}

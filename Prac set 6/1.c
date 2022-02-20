//Program to print address of a variable
#include<stdio.h>
void main()
{
    int x,*ptr;
    ptr=&x;
    printf("Enter value of x: ");
    scanf("%d",&x);
    printf("Address of variable x is %p",ptr);
}

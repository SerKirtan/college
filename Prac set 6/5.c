//Copy one array to another using pointer
#include <stdio.h>
int main()
{
    int i=0,n,a[100],*ptr=&a;
    printf("Enter the size of array[1-100] : ");
    scanf("%d",&n);
    for(;ptr<&a[n];ptr++)
    {
        printf("\nEnter number : ");
        scanf("%d",ptr);
    }
    printf("Array elements are :");
    for(ptr=&a;ptr<&a[n];ptr++)
        printf(" %d",*ptr);
}

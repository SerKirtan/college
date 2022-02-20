//Swap two arrays with pointers
#include <stdio.h>
int main()
{
    int arr1[100],arr2[100],n,i,*ptr1=arr1,*ptr2=arr2;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("\nEnter array-1 elements :\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr1[i]);
    printf("\nEnter array-2 elements :\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr2[i]);
    for(i=0;i<n;i++,ptr1++,ptr2++)
    {
        *ptr1=*ptr1+*ptr2;
        *ptr2=*ptr1-*ptr2;
        *ptr1=*ptr1-*ptr2;
    }
    printf("After swapping\nArray 1 contains : ");
    for(i=0;i<n;i++)
        printf("%d ",arr1[i]);
    printf("\nArray 2 contains : ");
    for(i=0;i<n;i++)
        printf("%d ",arr2[i]);
}

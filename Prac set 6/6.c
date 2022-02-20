#include <stdio.h>
int main()
{
    int arr1[100],arr2[100],n,i,*ptr1=arr1,*ptr2=arr2;
    printf("Enter the size of array : ");
    scanf("%d",&n);
  
    printf("\nEnter array elements :\n");
  
    for(i=0;i<n;i++)
        scanf("%d",&arr1[i]);
  
    printf("Array-1 contains\n");
  
    for(i=0;i<n;i++)
        printf("%d ",arr1[i]);
  
    printf("Array-2 contains\n");
  
    for(i=0;i<n;i++)
        printf("%d ",arr2[i]);
  
    printf("\nAfter copying\n");
  
    for(;ptr1<&arr1[n];ptr1++,ptr2++)
        *ptr2=*ptr1;
  
    printf("Now array-2 contains\n");
  
    for(ptr2=arr2;ptr2<&arr2[n];ptr2++)
        printf("%d ",*ptr2);
}

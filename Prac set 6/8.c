//Access elemts using pointer
#include <stdio.h>
int main()
{
    int a[100],i,n,*ptr=a;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter array elements :\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Element at which index do you want to access?\n");
    scanf("%d",&i);
    printf("Element at %d index is %d",i,*(ptr+i));
    return 0;
}

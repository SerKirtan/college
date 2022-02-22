//Sort array using pointer
#include <stdio.h>
void sort(int n, int *p)
{
    int i, j, t;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(*(p+i)<*(p+j)) {
                t=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=t;
            }
        }
    }
    printf("Sorted array is : ");
    for(i=0;i<n;i++)
        printf("%d ",*(p+i));
}
int main()
{
    int n,arr[100],i;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the elements :\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    sort(n,arr);

    return 0;
}

#include <stdio.h>

int main()
{
    int x;
    printf("Enter a value\n");
    scanf("%d",&x);
    printf("pre increment - %d\n",++x);
    printf("post increment - %d\n",x++);
    printf("pre decrement - %d\n",--x);
    printf("post decrement -%d\n",x--);
    return 0;
}

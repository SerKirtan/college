#include <stdio.h>
int main() 
{
 int a,b,c;
 printf("Enter Value of a :");
 scanf("%d",&a);
 printf("Enter Value of B :");
 scanf("%d",&b);
 c=a;
 a=b;
 b=c;
 printf("\nAfter Interchange Values A = %d B = %d",a,b);
 return 0;
}

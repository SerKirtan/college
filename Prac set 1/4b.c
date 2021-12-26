//Interchange value without 3rd variable

#include <stdio.h>
int main() 
{
 int a,b;
 printf("Enter Value of a :");
 scanf("%d",&a);
 printf("Enter Value of B :");
 scanf("%d",&b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("\nAfter Interchange Values A = %d B = %d",a,b);
 return 0;
}

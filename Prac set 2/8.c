//WAP to check if the last digit is odd or even

#include <stdio.h>

int main() 
{
 int i,a;
 printf("\n Enter any Number : ");
 scanf("%d",&i);
 a=i%10;
 if(a%2==0)
 {
  printf("\n Last Digit of Number is Even");
 }
 else
 {
  printf("\n Last Digit of Number is Odd");
 }
 return 0;
}

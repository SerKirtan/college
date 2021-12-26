//Pass or fail

#include<stdio.h>

int main()
{
 int marks;
 printf("\n Enter Marks from 0-100 :");
 scanf("%d",&marks);
 repeat:
 if(marks>=0 && marks<=100)
 {
 if(marks<23)
 {
  printf("\n Sorry ..! You Failed");
 }
 else
 {
  printf("\nCongratulation ...! You Passed");
 }
 }
 else
 {
  printf("Please enter marks between 0-100\n");
  scanf("%d",&marks);
  goto repeat;
 }
 return 0;
}

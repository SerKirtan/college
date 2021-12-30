//Read and store rollno and marks of 20 students

#include<stdio.h>
#define N 20
int main()
{
    int marks[N],roll[N],i;
    for(i=0;i<N;i++)
    {
        printf("%d] Enter roll number and marks\n",i+1);
        scanf("%d %d",&roll[i],&marks[i]);
    }
    for(i=0;i<N;i++)
    {
        printf("Roll %d got %d marks\n",roll[i],marks[i]);
    }
    return 0;
}

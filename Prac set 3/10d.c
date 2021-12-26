/*Pattern
1
22
333
4444
55555*/
#include<stdio.h>
int main(){
    int r,c,rows;
    printf("Enter rows\n");
    scanf("%d",&rows);
    for(r=1;r<=rows;r++)
    {
        for(c=1;c<=r;c++)
        {
            printf("%d",r);
        }
        printf("\n");
    }
    return 0;
}

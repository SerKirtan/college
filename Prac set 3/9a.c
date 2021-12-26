#include<stdio.h>
int main(){
    int r,c,rows;
    printf("Enter rows\n");
    scanf("%d",&rows);
    for(r=1;r<=rows;r++){
        for(c=1;c<=r;c++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

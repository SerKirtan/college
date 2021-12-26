/*Pattern
*****
****
***
**
*
*/
#include<stdio.h>
int main(){

    int r,c,rows;
    printf("Enter number of rows\n");
    scanf("%d",&rows);
    for(r=1;r<=rows;r++)
    {
        for(c=1;c<=2*rows-1;c++)
        {
            if(c<=rows-(r-1)&&c<=rows+(r-1))
            {
                    printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

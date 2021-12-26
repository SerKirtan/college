/*Pattern
    *
   * *
  * * *
 * * * *
*/
#include<stdio.h>
int main(){

    int r,c,rows;//replace;
    printf("Enter number of rows\n");
    scanf("%d",&rows);
    /*replace = c;
    c=r;
    r=replace;*/
    for(r=1;r<=rows;r++)
    {
        for(c=1;c<=2*rows-1;c++)
        {
            if(c>=rows-(r-1)&&c<=rows+(r-1))
            {
                if(r%2==0 && c%2==1 || r%2==1 && c%2==0)
                    printf(" ");
                else
                    printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

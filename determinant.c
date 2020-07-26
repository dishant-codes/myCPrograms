#include<stdio.h>
int main()
{

    int a[2][2];
    int row,col;
    int det;
    printf("\n Enter Matrix =");
    for(row=0;row<2;row++)
    {
        for(col=0;col<2;col++)
        {
            scanf("%d",&a[row][col]);
        }
    }
   for(row=0;row<2;row++)
    {

        for(col=0;col<2;col++)
        {
            printf("%d\t",a[row][col]);
        }
        printf("\n");
    }
    printf("\n The Determinant is=%d",det);
}

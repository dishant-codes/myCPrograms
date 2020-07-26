#include<stdio.h>
int main()
{

    int a[5],i,j,t,*p;
    printf("\n Enter 5 array elements");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    p=a;
    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            if(*(p+j)<*(p+j+1))
            {
                t=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=t;
            }
        }
    }
 printf("\n Sorted array");
 for(i=0;i<5;i++)
 {
     printf("\n %d",*(p+i));
 }
}

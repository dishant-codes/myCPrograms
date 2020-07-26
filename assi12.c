#include<stdio.h>
#define anurag
void main()
{
    int a,b;
    printf("\nEnter Any Two No\n");
    scanf("%d%d",&a,&b);
    #ifdef anurag
    printf("\nSum Of Two No is %d",a+b);
    printf("\nSub Of Two No is %d",a-b);
    #else
    printf("\nSum Is not Allowed");
    #endif

}

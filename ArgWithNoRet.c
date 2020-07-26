//wap to perform addition of two numbers using function / type's of function
#include<stdio.h>
void add(int a,int b);
void main()
{
    int x,y;
    printf("Enter Two Numbers:");
    scanf("%d%d",&x,&y);
    add(x,y);
}
void add(int a,int b)
{
    int c;
    c=a+b;
    printf("Addition of Two Numbers:%d",c);
}

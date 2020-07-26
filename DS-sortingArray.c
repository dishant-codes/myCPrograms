#include<stdio.h>
#define size 5
int main()
{
  int la[size];
  int i,j,temp;
  printf("\n Enter 5 element=");
  for(i=0;i<size;i++)
  {
      scanf("%d",&la[i]);
  }
  for(i=0;i<size;i++)
  {
      for(j=0;j<size-1;j++)
      {
          if(la[j]>la[j+1])
          {
              temp=la[j];
              la[j]=la[j+1];
              la[j+1]=temp;
          }
      }
  }
  printf("\n sorted array element\n");
  for(i=0;i<size;i++)
  {
      printf("%d\n",la[i]);
  }
}

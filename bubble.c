#include<stdio.h>
void main()
{
  int la[5];
  int i,j,temp;
  printf("\n Enter Array Elements\n");
  for(i=0;i<5;i++)
  {
      scanf("%d",la[i]);
  }
  for(i=0;i<5;i++)
  {
      for(j=0;j<5-1;j++)
      {
          if(la[j]>la[j+1])
          {

              temp=la[j];
              la[j]=la[j+1];
              la[j+1]=temp;
          }
      }
  }
  printf("Sorted array is :\n");
  for(i=0;i<5;i++)
  {
      printf("%d\n",la[i]);
  }
}

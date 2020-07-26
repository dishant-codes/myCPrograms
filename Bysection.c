#include<stdio.h>
#include<math.h>
int main()
{
    int i=1;
    float x0,x1,x2,y0,y1,y2,e;
    back:
        printf("\n The Initial guess x0 & x1 are=");
        scanf("%f%f",&x0,&x1);
        printf("\n The Maximum allowable error is =");
        scanf("%f",&e);
        y0=x0*x0-4*x0-10;
        y1=x1*x1-4*x1-10;
         if((y0<0&&(y1<0))||((y0>0&&(y1>0))))
         {
             printf("Root does not bracket");
             goto back;
         }
         else
         {
           x2=(x0+x1)/2;
           y2=x2*x2-4*x2-10;
           printf("\n Iteration \t x0 \t x1 \t x2 \t y0 \t y1 \t y2\n");
           printf("\n    %d  %.4f \t %.4f \t %.4f \t %.4f \t %.4f \t %.4f",i,x0,x1,x2,y0,y1,y2);
         }
         while(fabs(y2)>e)
         {

             if((y0*y2)<0)
             {

                 x1 = x2;
                 y1 = y2;
             }
             else
             {
                 x0 = x2;
                 y0 = y2;

             }
             x2=(x0+x1)/2;
             y2=x2*x2-4*x2-10;
             i++;
             printf("\n   %d  %.4f \t %.4f \t %.4f \t %.4f \t %.4f \t %.4f",i,x0,x1,x2,y0,y1,y2);

         }
         printf("\n An approximate root =%.4f",x2);
         printf("\n The function value of root =%.4f",y2);
         return 0;

}

#include <stdio.h>
#include <math.h>

int main()
{
   float p,t,r,ci;
   printf("enter the principal_amount\n");
   scanf("%f",&p);

   printf("enter the time\n");
   scanf("%f",&t);

   printf("enter the rate\n");
   scanf("%f",&r);

   ci=p*pow((1+r/100),t);
   printf("compound interest  is %f",ci);

    return 0;
}

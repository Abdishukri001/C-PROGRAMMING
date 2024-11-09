//calculating simple interest
#include <stdio.h>
int main()
{
    float principle,time,rate,amount;
    printf("enter the principle");
    scanf("%f",&principle);

    printf("enter the time");
    scanf("%f",&time);

    printf("enter the rate");
    scanf("%f",&rate);

    amount=principle*time*rate/100;
    printf("%f",amount);



    return 0;
}


#include <stdio.h>

int main(){
    int a, b;
    printf("enter the number of terms");
    scanf("%d",&a);

    for(b=1;b<a;b++){
        printf("the number is:%d and the cube of the %d is:%d\n",b,b,b*b*b);

    }
    return 0;


}

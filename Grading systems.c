//grading system
#include<stdio.h>

int main(){
    int chem,bio,phy, sum;
    float average;

    printf("enter marks for chem");
    scanf ("%d",&chem);

    printf("enter marks for bio");
    scanf("%d",&bio);

    printf("enter marks for phy");
    scanf("%d",&phy);
    sum=chem+bio+phy;
    average=sum/3;
    printf("average is %f",average);

    if(average >=70){
        printf("A\n");
    }
    else if(average>=60){
        printf("B\n");
    }
    else if(average>=50){
        printf("C\n");
    }
    else if(average>=40){
        printf("D\n");
    }
    else{
        printf("E\n");
    }
    return 0;

}


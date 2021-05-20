#include<stdio.h>
int main(){
    float a[5],b[5],sum1=0,sum2=0,n=5;
    printf("Enter the values of 1st array:\n");
    for(int i=0;i<5;i++){
        scanf("%f",&a[i]);
          sum1=sum1+a[i];
    }
    printf("Enter the values of 2nd array:\n");
    for(int i=0;i<5;i++){
        scanf("%f",&b[i]);
          sum2=sum2+b[i];
    }
    if(sum1/n > sum2/n){
        printf("%f-->a",sum1/n);
    }
    else{
        printf("%f-->b",sum2/n);
    }
    return 0;
}
#include<stdio.h>
int main(){
    float f,c;
    printf("Enter the celcious value:");
    scanf("%f",&c);
    f=c*(9/5)+32;
    printf("The fahrenheit value is:%.2f F",f);
    return 0;
}
#include<stdio.h>
int main(){
    float length,area,width;
    printf("Enter length:");
    scanf("%f",&length);
    width=(6*length)/10; /* first do multiplication */
    area=width*length;
    printf("The area of the flag is:%.2f",area);
    return 0;
}
#include<stdio.h>
#include<math.h>
int main(){
    float r=5.5,pi=3.1416,area;
    area=pi*pow(r,2);   // pow(value,power)
    printf("The area of the circle is:%.2f",area);
    return 0;
}
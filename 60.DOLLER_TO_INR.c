#include<stdio.h>
float convert(float doller){
    float inr=doller*70.56;
    return inr;
}
int main(){
    float doller;
    printf("enter doller amount:");
    scanf("%f",&doller);
    printf("%.2f rupees",convert(doller));
    return 0;
}
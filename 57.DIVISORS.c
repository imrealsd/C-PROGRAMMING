#include<stdio.h>
int divisor(int a){
    for(int i=1;i<=a;i++){
        if(a%i==0){
            printf("%d,",i);
        }
    }

}
int main(){
    int a;
    printf("enter an integer:");
    scanf("%d",&a);
    divisor(a);
    return 0;
}
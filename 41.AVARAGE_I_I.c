#include<stdio.h>
int main(){
    int avg,sum=0,count=0;
    for(int i=10;i<=500;i++){
        if(i%3==0 && i%5==0 && i%12==0){
            sum=sum+i;
            count++;
        }
    }
    avg=sum/count;
    printf("%d",avg);
    return 0;
}
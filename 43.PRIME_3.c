#include<stdio.h>
int main(){
    int limit,count=0;
    printf("please enter a number:");
    scanf("%d",&limit);
    for(int i=0;i<=limit;i++){
       for(int j=1;j<=i;j++){
           if(i%j==0){
               count++;
            }
        }
        if(count==2){
            printf("%d ",i);
        }
        count =0;
    }
    return 0;
}
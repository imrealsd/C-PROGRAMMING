#include<stdio.h>
int main(){
    int num;
    printf("Please enter a number:");
    scanf("%d",&num);
    if(num==-1){
        printf("program stopped");
    }
    else{
        for(int i=-32;i<=num;i++){
            printf("%d\n",i);
        }
    }
    return 0;
}
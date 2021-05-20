#include<stdio.h>
int main(){
    int val;
    printf("enter a value:");
    scanf("%d",&val);
    if(val>0){
        printf("absolute value is: %d",val);
    }
    else{
        printf("absolute value is: %d",-1*val);
    }
    return 0;
}
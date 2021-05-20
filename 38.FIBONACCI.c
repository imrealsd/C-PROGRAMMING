#include<stdio.h>
int main(){
    int val,first=0,second=1;
    printf("enter a value:");
    scanf("%d",&val);
    while(first<=val){
        printf("%d ",first);
        int temp=first;
        first=second;
        second=second+temp; // val=0 , 0 1
    }
    return 0;
   
}
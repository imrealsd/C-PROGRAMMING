#include<stdio.h>
int main(){
    for(int i=200;i<=300;i++){
        if(i%3==0 && i%5==0){
            printf("%d\n",i);
        }
        else{
            continue;
        }
    }
    return 0;
}
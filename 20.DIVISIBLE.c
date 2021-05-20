#include<stdio.h>
int main(){
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(num%3==0 && num%5==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
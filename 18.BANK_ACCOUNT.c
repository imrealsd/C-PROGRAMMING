#include<stdio.h>
int main(){
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    if(age>=18){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
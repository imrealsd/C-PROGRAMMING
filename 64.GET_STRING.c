#include<stdio.h>
int main(){
    char name[100];
    printf("enter your name:");
    scanf("%[^\n]%*c",name);
    printf("Mr %s",name);
    return 0;
}
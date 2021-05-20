#include<stdio.h>
int main(){
    char letter;
    printf("Enter the character:");
    scanf("%c",&letter);
    printf("Upper version is:%c",letter-32);
    return 0;
}
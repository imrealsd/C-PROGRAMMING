#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int size;
    printf("enter a word:");
    scanf("%s",str);
    size=strlen(str);
    for(int i=size-1;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}
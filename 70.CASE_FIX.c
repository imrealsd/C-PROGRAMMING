#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i;
    printf("Please enter a string:");
    scanf("%s",str);
    if(str[0]>=97 && str[0]<=122){
        str[0]=str[0]-32;
    }
    printf("%c",str[0]);
    for(i=1;i<strlen(str);i++){
        if (str[i]>=65 && str[i]<=91){
            printf("%c",str[i]+32);
        }
        else{
            printf("%c",str[i]);
        }
    }
    return 0;
}
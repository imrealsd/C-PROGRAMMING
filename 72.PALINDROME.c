#include<stdio.h>
#include<string.h>
int main(){
    char str[100],str1[100];
    printf("enter a string:");
    gets(str);
    strcpy(str1,str);
    for(int i=0;i<=strlen(str1)-1;i++){
        str1[i]=str1[strlen(str)-1-i];
    }
    int value=strcmp(str,str1);
    if(value==0){
        printf("PALINDROME\n");
    }
    else{
        printf("NOT PALINDROME\n");
    }
    return 0;
}
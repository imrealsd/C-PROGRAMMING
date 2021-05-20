#include<stdio.h>
#include<string.h>
int main(){
    char str1[10],str2[10],str3[10],str4[100];
    int j=0;
    printf("enter 1st string:");
    scanf("%s",str1);
    printf("enter 2st string:");
    scanf("%s",str2);
    printf("enter 3st string:");
    scanf("%s",str3);
    for(int i=0;i<strlen(str1);i++){
        str4[j++]=str1[i];
    }
    str4[j++]=' ';
    for(int i=0;i<strlen(str2);i++){
        str4[j++]=str2[i];
    }
    str4[j++]=' ';
    for(int i=0;i<strlen(str3);i++){
        str4[j++]=str3[i];
    }
    str4[j]='\0';
    printf("%s",str4);
    return 0;
}
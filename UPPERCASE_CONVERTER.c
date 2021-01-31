#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define Max 10

int main (){
    char str[Max];
    printf("Please enter a string:\n");
    scanf("%[^\n]",&str);
    str[0]=toupper(str[0]);
    printf("%s",str);
}

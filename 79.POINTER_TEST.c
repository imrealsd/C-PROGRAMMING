#include<stdio.h>
int main(){
    char *str="India";
    printf("%c %c %c\n",*str,*(str+3),*(str+4));
    printf("%c",str[0]);
    return 0;
}
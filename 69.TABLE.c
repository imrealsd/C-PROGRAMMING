#include<stdio.h>
int main(){
    char a,b,c;
    printf("please enter 3 characters:");
    scanf("%c %c %c",&a,&b,&c);
    a=a+3;
    b=b+3;
    c=c+3;
    printf("%c %c %c",a,b,c);
    return 0;
}
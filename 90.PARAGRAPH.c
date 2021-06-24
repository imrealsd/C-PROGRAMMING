#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
    fp=fopen("file12.txt","r");
    while((ch=fgetc(fp))!=EOF){
        printf("%c",ch);
    }
    printf("\n");
    return 0;
}

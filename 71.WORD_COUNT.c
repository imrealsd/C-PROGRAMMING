#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    int count=1;
    printf("Please enter a sentence:");
    gets(str);
    // scanf("%[^\n]%*c", str);
    for(int i=0;i<strlen(str);i++){
        if(str[i]==' '){
            count++;
        }
    }
    printf("words present: %d",count);
    return 0;
}
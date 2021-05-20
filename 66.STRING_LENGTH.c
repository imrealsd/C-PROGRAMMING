#include<stdio.h>
int main(){
    char str[100];
    int lenght=0;
    printf("enter a string:");
    scanf("%s",str);
    for(int i=0;i<100;i++){
        if(str[i]!='\0'){
            lenght++;
        }
        else{
            break;
        }
    }
    printf("%d",lenght);
}

#include<stdio.h>
int main(){
    int a,b,c,max;
    printf("enter the value of a b c:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c){
        printf("Max is %d",a);
    }
    else if(b>=a && b>=c){
        printf("Max is %d",b);
    }
    else{
        printf("Max is %d",c);
    }
    return 0;

}
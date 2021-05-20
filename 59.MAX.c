#include<stdio.h>
int max(int a,int b,int c){
    int max;
    if(a>=b && a>=c){
        max=a;
    }
    else if(b>=c && c>=a){
        max=b;
    }
    else{
        max=c;
    }
    return max;
}

int main(){
    int a,b,c;
    printf("enter 3 values:\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("%d",max(a,b,c));
    return 0;
}
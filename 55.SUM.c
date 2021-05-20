#include<stdio.h>
int sum(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    printf("enter the value of a & b:\n");
    scanf("%d %d",&a,&b);
    printf("%d\n",sum(a,b));
    return 0;
}
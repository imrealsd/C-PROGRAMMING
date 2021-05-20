#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int subtract(int a,int b){
    return a-b;
}
int multiply(int a,int b){
    return a*b;
}
int division(int a,int b){
    return a/b;
}
int main(){
    int a,b,operation;
    printf("Please enter 2 values:");
    scanf("%d %d",&a,&b);
    printf("what do you want to perform ?\n");
    printf("add(0)/subtract(1)/multiply(2)/division(3)\n");
    scanf("%d",&operation);
    switch(operation){
        case 0:
            printf("%d",add(a,b));
        case 1:
            printf("%d",subtract(a,b));
        case 2:
            printf("%d",multiply(a,b));
        case 3:
            printf("%d",division(a,b));            
    }
    return 0;
}
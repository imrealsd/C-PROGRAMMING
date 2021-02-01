#include<stdio.h>
#include<stdlib.h>
int fact(int n){
    if (n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }

}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The factorial of number %d is: %d",n,fact(n));
    return 0;

}
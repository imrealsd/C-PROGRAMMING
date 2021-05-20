#include<stdio.h>
int even_odd(int a){
    if(a%2==0){
        printf("Number is even\n");
    }
    else{
        printf("Number is odd\n");
    }
    return 0;
}

int main(){
    int a;
    printf("Enter an integer:");
    scanf("%d",&a);
    even_odd(a);
    return 0;
}
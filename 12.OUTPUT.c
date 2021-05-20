#include<stdio.h>
int main(){
    
    int i=0,j=0;
    j= i++ + ++i; // prediction i=2 j=2
    printf("%d %d",i,j);
    return 0;
}

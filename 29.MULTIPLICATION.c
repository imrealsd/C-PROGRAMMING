#include<stdio.h>
int main(){
    int val,result;
    printf("Enter a integer:");
    scanf("%d",&val);
    for(int i=1;i<=10;i++){
        int result=i*val;
        printf("%d * %d = %d\n",val,i,result);
    }
    return 0;
}
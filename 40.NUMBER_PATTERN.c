#include<stdio.h>
int main(){
    int j;
    for(int i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf(" ");
        
        if(j==i+1){
            for(j=i;j>=1;j--){
                printf("%d",j);
            }
        }
        printf("\n");
    }
    return 0;
}

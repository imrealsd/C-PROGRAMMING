#include<stdio.h>
int main(){
    int rank;
    printf("Enter your rank:");
    scanf("%d",&rank);
    if(rank==1){
        printf("2,50,000");
    }
    if(rank==2){
        printf("2,10,000");
    }
    if(rank==3){
        printf("2,50,000");
    }
    if(rank==1){
        printf("1,50,000");
    }
    if(rank==4){
        printf("80,000");
    }
    if(rank>=5){
        printf("50,000");
    }
    return 0;
}
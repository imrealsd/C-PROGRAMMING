#include<stdio.h>
int main(){
    int arr[3][3],sum=0;
    printf("enter array elements:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        sum=sum+arr[i][i];
    }
    printf("The sum is:%d",sum);
    return 0;
}
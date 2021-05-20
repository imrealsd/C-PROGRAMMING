#include<stdio.h>
int main(){
    int arr[3][3],sum=0,count=0;
    printf("Enter array elements:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum=sum+arr[i][j];
            count++;
        }
    }
    printf("The avarage is:%d",sum/count);
    return 0;
}
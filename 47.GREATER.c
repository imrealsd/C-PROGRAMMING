#include<stdio.h>
int main(){
    int arr[5],sum=0,avg,count=0;
    printf("enter the elements:\n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<5;j++){
        if(arr[j]>100){
            sum=sum+arr[j];
            count++;
        }
    }
    avg=sum/count;
    printf("The avarage is: %d",avg);
    return 0;
} 
#include<stdio.h>
int main(){
    int arr[5],odd=0,even=0;
    printf("Enter the array elements:\n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<5;j++){
        if(arr[j]%2!=0){
            odd=odd+arr[j];
        }
        else{
            even=even+arr[j];
        }
    }
    printf("Even sum:%d\n",even);
    printf("Odd sum:%d\n",odd);
    return 0;
    
}
#include<stdio.h>
int main(){
    int arr[]={-99,45,100,37,89,-327,245};
    int max=arr[0];
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("The max num is:%d",max);
    return 0;
}
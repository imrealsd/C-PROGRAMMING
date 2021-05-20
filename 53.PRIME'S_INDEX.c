#include<stdio.h>
int main(){
    int arr[9]={1,23,10,15,17,21,44,43,53},count=0;
    for(int i=0;i<9;i++){
        for(int j=1;j<=arr[i];j++){
            if(arr[i]%j==0){
                count++;
            }
        }
        if(count==2){
            printf("val=%d , index=%d\n",arr[i],i);
        }
        count=0;
    }
    return 0;
}
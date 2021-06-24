#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int*p;
    p=&arr[0];
    printf("value=%d",*(p+1));
    return 0;
}
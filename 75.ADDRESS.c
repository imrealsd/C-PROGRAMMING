#include<stdio.h>
int main(){
    int x=100,y=200;
    int *px=&x,*qy=&y;
    printf("value of x:%d\n",*px);
    printf("value of y:%d\n",*qy);
    return 0;
}
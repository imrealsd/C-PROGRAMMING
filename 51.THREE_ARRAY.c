#include<stdio.h>
int main(){
    int A[5],B[5],AB[5];
    printf("Enter values of A:\n");
    for(int i=0;i<5;i++){
        scanf("%d",&A[i]);
    }
    printf("Enter values of B:\n");
    for(int i=0;i<5;i++){
        scanf("%d",&B[i]);
    }
    for(int j=0;j<5;j++){
        AB[j]=A[j]+B[j];
    }
    for(int k=0;k<5;k++){
       printf("%d ",AB[k]);
    }
    return 0;

}
#include<stdio.h>
int main(){
    float gpa;
    printf("Enter your gpa:");
    scanf("%f",&gpa);
    if(gpa>=5){
        printf("YES\n");
    }
    else{
        printf("NO");
    }
    return 0;
}
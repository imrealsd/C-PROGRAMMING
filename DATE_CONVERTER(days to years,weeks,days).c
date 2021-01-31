#include<stdio.h>
int main(){
    int days ;
    int years;
    int weeks;
    printf("Please enter no. of days:\n");
    scanf("%d",&days);
    if(days>365){
        years=days/356;
        int a=days%365;
        if(a>7){
            weeks=days/7;
            int b=days%7;
            printf("%d years--%d weeks--%d days",years,weeks,b);
        }
        else if(a<7){
            weeks=0;
            printf("%d years--%d weeks--%d days",years,weeks,a);
        }

    }
    else{
        years=0;
        weeks=days/7;
        int a=days%7;
        printf("%d years--%d weeks--%d days",years,weeks,a);

    }

  
    return 0;
}

#include<stdio.h>
int main(){
    FILE *fp;
    int a,sum=0;
    float avg=0;
    fp=fopen("MYFILES/FILE3.txt","r");
    while(fscanf(fp,"%d",&a)!=EOF){
        sum=sum+a;
    }
    fclose(fp);
    avg=sum/10;
    printf("%d\n",sum);
    printf("%.2f",avg);
    return 0;

}
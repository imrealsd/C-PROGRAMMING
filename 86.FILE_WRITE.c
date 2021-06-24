#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("MYFILES/FILE1.txt","w");
    fprintf(fp,"%d",100); // writing on file
    fclose(fp);
    return 0;
}
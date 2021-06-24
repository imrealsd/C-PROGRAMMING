#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("MYFILES/FILE1.txt","w");
    fprintf(fp,"%s\n","LOVE"); // take a byte more storage
    fputs("LOVE",fp); // take less storage
    fclose(fp);
    return 0;
   
}


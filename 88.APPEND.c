#include<stdio.h>
int main(){
    FILE *fp;
    char str[20];
    char ch;
    fp=fopen("MYFILES/FILE2.txt","w");
    fputs("we love",fp);
    fclose(fp);

    fp=fopen("MYFILES/FILE2.txt","r");
    while((ch=fgetc(fp))!=EOF){ // printing method 1
        printf("%c",ch);
    }

    // fgets(str,20,fp); // printing method 2
    // printf("%s",str);
    // fclose(fp);

    fp=fopen("MYFILES/FILE2.txt","a");
    fputs(" our country",fp);
    printf("\n");
    fclose(fp);
    fp=fopen("MYFILES/FILE2.txt","r");
    while((ch=fgetc(fp))!=EOF){ 
        printf("%c",ch);
    }
    fclose(fp);
    return 0;
}
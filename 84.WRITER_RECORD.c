#include<stdio.h>
#include<string.h>
int main(){
    struct writer{
        char name[20];
        char genere[20];
    };
    struct writer writer_record[3];
    strcpy(writer_record[0].name,"mukla.c");
    strcpy(writer_record[0].genere,"technical");
    strcpy(writer_record[1].name,"Aniket");
    strcpy(writer_record[1].genere,"story");
    strcpy(writer_record[2].name,"subhas");
    strcpy(writer_record[2].genere,"novel");
    for(int i=0;i<3;i++){
        printf("Writer no:%d\n",i);
        printf("Name:%s\n",writer_record[i].name);
        printf("Genere:%s\n",writer_record[i].genere);
        printf("\n");
    }
    return 0;
}
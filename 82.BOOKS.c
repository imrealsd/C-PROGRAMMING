#include<stdio.h>
int main(){
    struct book{
        int id;
        char author[20];
        char title[20];
    };
    struct book b1={1,"abc","c programming"};
    struct book b2={2,"xyz","c++ programming"};
    printf("info of book 1\n");
    printf("id:%d\n",b1.id);
    printf("title:%s\n",b1.title);
    printf("author:%s\n",b1.author);
    printf("\n");
    printf("info of book 2\n");
    printf("id:%d\n",b2.id);
    printf("title:%s\n",b2.title);
    printf("author:%s\n",b2.author);
    return 0;
}
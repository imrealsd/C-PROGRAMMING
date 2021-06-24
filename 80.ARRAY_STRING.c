#include<stdio.h>
int main(){
    char* names[4]={"subha","soumya","tanmay","saibal"};
    for(int i=0;i<4;i++){
        printf("%s\n",names[i]);
    }
    printf("%s",*names);
    return 0;
}
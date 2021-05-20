#include<stdio.h>
int main(){
    char arr[11]={'a','e','i','o','u','A','E','I','O','U'};
    char input;
    printf("enter a letter:");
    scanf("%c",&input);
    for(int i=0;i<10;i++){
        if(input==arr[i]){
            printf("Vowel");
            break;
        }
        if(arr[i]=='U'){ //loop reached at last element
            printf("Consonant");
        }
    }
    return 0;
}
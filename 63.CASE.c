#include<stdio.h>
int upper_case(char ch){
    ch=ch-32;
    printf("%c",ch);
    return 0;

}
int main(){
    char character;
    printf("enter a characrter:");
    scanf("%c",&character);
    upper_case(character);
}
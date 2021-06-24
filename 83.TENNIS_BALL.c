#include<stdio.h>
struct tennis_ball{
    float weight;
    char colour[10];
};
struct tennis_ball ball;
int main(){
    struct tennis_ball*myball;
    myball=&ball;
    printf("enter colour:");
    scanf("%s",&ball.colour);
    printf("enter weight:");
    scanf("%f",&ball.weight);
    printf("\n");
    printf("Ball Info\n");
    printf("colour:%s\n",myball->colour);
    printf("weight:%.2f\n",myball->weight);
    return 0;
}
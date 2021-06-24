#include<stdio.h>
#include<string.h>
struct product{
    char name[20];
    double price;
};

int printProductInfo(struct product p){
    printf("%s\n",p.name);
    printf("%.2f\n",p.price);
    return 0;
}
int main(){
    struct product myproduct={"Home_Assistant",2300};
    // strcpy(myproduct.name,"home_assistant");
    // myproduct.price=2400;
    printProductInfo(myproduct);
    return 0;
}
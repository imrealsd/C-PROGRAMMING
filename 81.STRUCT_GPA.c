#include<stdio.h>
int main(){
    struct student{
        int id;
        float cgpa;
        char name[20];
    };
    struct student s1;
    printf("enter the id of student:");
    scanf("%d",&s1.id);
    printf("enter the name of student:");
    scanf("%s",&s1.name);
    printf("enter the cgpa of student:");
    scanf("%f",&s1.cgpa);
    printf(" Name:%s\n Cgpa:%f\n id:%d\n",s1.name,s1.cgpa,s1.id);
    return 0;
}
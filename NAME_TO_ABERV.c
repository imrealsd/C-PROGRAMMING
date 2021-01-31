
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char name[100];
    printf("Please enter your name(firstname middlename lastname):");
    scanf("%[^\n]%*c",name);
    int size= strlen(name),count=0,temp;
    char f=name[0],m,l;
    for(int i=0;i<size;i++){
        if(name[i]==' '){
            if(count==0){
                m=name[i+1];
            
                count=1;
                temp=i;
            }
            else if(count==1){
                if(temp!=i){
                    l=name[i+1];
                }
            }
        }
        else{
            continue;
        }
    }
  
    printf("%c.%c.%c",f,m,l);
      
}
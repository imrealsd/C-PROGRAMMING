#include<stdio.h>
int main(){
	int val,count=0;
	printf("enter a integer:");
	scanf("%d",&val);
	for(int i=1;i<=val;i++){
		if(val%i==0){
			count++;
		}
	}
	if(count==2){
		printf("The entered number is a Prime Number.\n");
	}
	else{
		printf("The number is not a prime number\n");
	}
	return 0;
}
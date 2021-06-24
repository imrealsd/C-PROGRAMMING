#include<stdio.h>
#include<math.h>
int main(){
	int x1,x2,y1,y2;
	int d2,d;
	printf("enter first point location:");
	scanf("%d,%d",&x1,&y1);
	printf("enter second point location:");
	scanf("%d,%d",&x2,&y2);
	d2=((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
	d=sqrt(d2);
	printf("The distance is:%d\n",d);
	return 0;
}
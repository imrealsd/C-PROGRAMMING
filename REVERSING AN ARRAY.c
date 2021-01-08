#include<stdio.h>
#include<stdlib.h>
void main()
{
    int arr[]={1,2,3,4};
    int i,j,temp;
    for (i=0,j=3 ;i<j ;i++,j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }    
    printf("after reversing the array is:") ;   
    for (i=0;i<4;i++)
        printf("%d",arr[i]);
}

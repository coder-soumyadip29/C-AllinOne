//swapping of two variables without using third variable

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a num: ");
    scanf("%d",&a);
    printf("Enter another num: ");
    scanf("%d",&b);
    printf("Before swapping: a=%d and b=%d\n",a,b);
    a=a+b; //a=10+20=30
    b=a-b; 
    a=a-b;  
    printf("After swapping: a=%d and b=%d",a,b);
   
    return 0;
}
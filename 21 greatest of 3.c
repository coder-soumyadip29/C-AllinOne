#include<stdio.h>
int main(){
int a,b,c;
printf("Enter a number: ");
scanf("%d",&a);
printf("Enter another number: ");
scanf("%d",&b);
printf("Enter another number: ");
scanf("%d",&c);
 if(a>b && a>c){
    printf("%d is the greatest number.\n",a);
 }
else if(b>a && b>c){
    printf("%d is the greatest number.",b);

}
else
printf("c is the graetest number.");


    return 0;
}
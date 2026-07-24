#include<stdio.h>
int main(){
int p,t;
float r;
printf("Enter the total amount of principal :");
scanf("%d",&p);
printf("Enter the rate of interest per year :");
scanf("%f",&r);
printf("Enter the time(year :)");
scanf("%d",&t);
float ci= p*(1+r/100)*t;
printf("So the compound interest is: %f",ci);
return 0;
}
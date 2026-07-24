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
float si=p*r*t/100;
printf("The Simple interest is: %f",si);

    return 0;
}
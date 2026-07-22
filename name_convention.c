#include<stdio.h>
int main(){
char name[20];
char surname[20];
printf("Enter your name: ");
scanf("%s",&name);
printf("Enter your sur name: ");
scanf("%s",&surname);
int age;
printf("Enter your age: ");
scanf("%d",&age);

printf("Hello, %s %s . Your age is %d", name, surname , age);

return 0;
}
#include<stdio.h>
int main(){
char name[20];
int age;
printf("Enter your name: ");
scanf("%s",name);
printf("Enter your age :");
scanf("%d",&age);
if(age<=13){
printf("%s , your age is %d, so you are a child.",name, age);
}
else if (age<=20 && age>13)
{
    printf("%s , your age is %d, so you are a teen ager.",name, age);

}
else if (age<60 && age>=20)
{
        printf("%s , your age is %d, so you are a adult.",name, age);

}
else{
    printf("%s , you are a senior citizen, because your age is %d", name,age);
}

    return 0;
}
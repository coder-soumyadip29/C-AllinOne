#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter the number of a : ");
    scanf("%d",&a);
     printf("Enter the number of b : ");
    scanf("%d",&b);
     printf("Enter the number of c : ");
    scanf("%d",&c);
     printf("Enter the number of d : ");
    scanf("%d",&d);
    int s=a+b+c+d;
    printf("Enter total marks out of 400: ",&s);
    if(s>=300)
    {
        printf("Very good boy. Letter obtained.");

    }
    else if(s>=200 && s<300){
        printf("Keep inproving yourself. Good job till now. more than 60%");
    }
    elseif(s>=100 && s<200) {
        printf("Need to double up your efforts");
    }
    else{
    printf("Sorry. Better luck next time.")
    }
    return 0;
}
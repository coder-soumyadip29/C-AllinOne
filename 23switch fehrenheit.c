#include <stdio.h>
int main()
{
    float c;
    int ch;
    printf("Enter temperature in Centigrade: ");
    scanf("%f", &c);
    printf("\n100. Fahrenheit");
    printf("\n200. Kelvin");
    printf("\n300. Romar");
    printf("\nEnter your choice: ");
    scanf("%d", &ch);
    switch(ch){
    case 100:
        printf("Fahrenheit = %.2f", (c * 1.8) + 32);
        break;
    case 200:
        printf("Kelvin = %.2f", c + 273);
        break;
    case 300:
        printf("Romar = %.2f", c * 0.8);
    break;
    default:
        printf("Invalid Choice");
}
    return 0;
}
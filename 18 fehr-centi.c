 #include <stdio.h>
int main()
{
    int f;
    float c;
    printf("temperature in fehrenheit is: ");
    scanf("%d",&f);
    c=((5.0/9.0)*(f-32));
    printf("the temperature in centigrade: %.2f",c);

    return 0;
}
    
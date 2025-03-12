// convert Temperature degrees Celsius to Fahrenheit
#include<stdio.h>
int main()
{
    float celsius,fahrenheit;
    printf("Enter the Temperature in degrees Celsius:");
    scanf("%f",&celsius);
    fahrenheit=(celsius*9/5)+32;
    printf("Temperature in Fahrenheit :%f",fahrenheit);
    return 0;


}
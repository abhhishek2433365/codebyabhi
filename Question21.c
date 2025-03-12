// convet temperature celcis to farhanhit using function
#include<stdio.h>
float converter(float temprature);
int main()
{
    float temperature ,farahanhit;
    printf("enter temoerature in celcis :");
    scanf("%f",&temperature);
    farahanhit=converter(temperature);
    printf("temperature in celcius %0.2f and temperature in %0.2f farhanhit",temperature,farahanhit);

}
float converter(float tempreature)
{
    float temp=(tempreature*9/5)+32;
    return temp;
}
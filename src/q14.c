// Write a function named convertTemperature that takes a temperature value in Celsius and converts it to Fahrenheit. The function should return the converted temperature.

#include <stdio.h>
int convertTemperature (float celsius)
{
    float fahrenheit;

    fahrenheit=(celsius*9/5)+32;
    return fahrenheit;
}
int main(){
    float celsius, fahrenheit;

    printf("Enter the temperature in celsius:");
    scanf(" %f", &celsius);

    fahrenheit=convertTemperature(celsius);
    printf(" %.2f%cC is %.2f%cF",celsius, 248, fahrenheit, 248);
    return 0;
}

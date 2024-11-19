#include <stdio.h>

void reportTheWeather(float, float);

int main() {
    float temperature, humidity;


    printf("Enter the current temperature in degrees Celsius: ");
    scanf("%f", &temperature);

    printf("Enter the current humidity level (0-100): ");
    scanf("%f", &humidity);

    reportTheWeather(temperature, humidity);

    return 0;
}

void reportTheWeather(float temperature, float humidity)
{

    if (temperature > 25.0 && humidity < 70.0)
    {
        printf("The weather is Sunny.\n");
    }
    else if (temperature < 10.0)
    {
        printf("The weather is Cold.\n");
    }
    else if (temperature >= 10.0 && temperature <= 25.0)
    {
        if (humidity > 80.0)
        {
            printf("The weather is Rainy.\n");
        }
        else if (humidity >= 70.0 && humidity <= 80.0)
        {
            printf("The weather is Partly Cloudy.\n");
        } else
        {
            printf("The weather is Foggy.\n");
        }
    }
    else
    {
        printf("The weather is Foggy.\n");
    }
}
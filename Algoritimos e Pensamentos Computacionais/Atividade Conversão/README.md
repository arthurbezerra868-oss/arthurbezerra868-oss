#include <stdio.h>

int main() {

    int option;
    float temperature, result;

    printf("===== TEMPERATURE CONVERTER =====\n\n");

    printf("1 - Kelvin to Celsius\n");
    printf("2 - Celsius to Fahrenheit\n");

    printf("\nChoose an option: ");
    scanf("%d", &option);

    printf("Enter the temperature: ");
    scanf("%f", &temperature);

    switch (option) {

        case 1:
            result = temperature - 273.15;
            printf("\nResult: %.2f Celsius\n", result);
            break;

        case 2:
            result = (temperature * 9.0 / 5.0) + 32.0;
            printf("\nResult: %.2f Fahrenheit\n", result);
            break;

        default:
            printf("\nInvalid option!\n");
            break;
    }

    return 0;
}

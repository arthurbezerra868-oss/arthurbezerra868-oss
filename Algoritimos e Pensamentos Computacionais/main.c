#include <stdio.h>

int main() {

    int opcao;
    float temperatura, resultado;

    printf("===== CONVERSOR DE TEMPERATURA =====\n\n");

    printf("1 - Kelvin para Celsius\n");
    printf("2 - Celsius para Fahrenheit\n");

    printf("\nEscolha uma opcao: ");
    scanf("%d", &opcao);

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    switch (opcao) {

        case 1:
            resultado = temperatura - 273.15;
            printf("\nResultado: %.2f Celsius\n", resultado);
            break;

        case 2:
            resultado = (temperatura * 9.0 / 5.0) + 32.0;
            printf("\nResultado: %.2f Fahrenheit\n", resultado);
            break;

        default:
            printf("\nOpcao invalida!\n");
            break;
    }

    return 0;
}



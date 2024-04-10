#include <stdio.h>

int main() {
    int mes;

    // Solicita ao usuário para inserir o número do mês
    printf("Digite o número do mês (1 a 12): ");
    scanf("%d", &mes);

    // Verifica o número do mês e imprime o número de dias correspondente
    switch(mes) {
        case 2:
            printf("O mês de fevereiro tem 28 dias.\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("O mês tem 30 dias.\n");
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("O mês tem 31 dias.\n");
            break;
        default:
            printf("Número de mês inválido. Por favor, insira um número de mês válido (1 a 12).\n");
    }

    return 0;
}

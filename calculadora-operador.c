#include <stdio.h>

int main() {
    float num1, num2;
    char operador;
    float resultado;

    // Solicita ao usuário para inserir os dois números
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    // Solicita ao usuário para inserir o operador
    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);

    // Realiza a operação correspondente ao operador
    switch(operador) {
        case '+':
            resultado = num1 + num2;
            printf("O resultado da adição é: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("O resultado da subtração é: %.2f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("O resultado da multiplicação é: %.2f\n", resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("O resultado da divisão é: %.2f\n", resultado);
            } else {
                printf("Erro: divisão por zero!\n");
            }
            break;
        default:
            printf("Operador inválido. Por favor, insira um dos operadores: +, -, *, /\n");
    }

    return 0;
}

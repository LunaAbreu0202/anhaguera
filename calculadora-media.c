#include <stdio.h>

//Siga @gustavotrindade77
// Função para verificar se o número é maior que 10 e reiniciar o código
void verificarLimite(float nota) {
    if (nota > 10) {
        printf("Suas notas vão somente até 10, tente digitar novamente\n");
        main(); // Reinicia o código
    }
}

int main() {
    // Variáveis
    float n1, n2, media;

    // Entrada de dados
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    verificarLimite(n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    verificarLimite(n2);

    // Cálculo da média
    media = (n1 + n2) / 2;

    // Saída de dados
    printf("Média: %.1f\n", media);

    if (media >= 6) {
        printf("Parabéns, você passou!\n");
    } else {
        printf("Infelizmente, você não passou...\n");
    }

    return 0;
}



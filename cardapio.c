//Siga @gustavotrindade77
#include <stdio.h>

int main() {
    // Declaração das variáveis
    int codigo_produto, quantidade;
    float valor_pago = 0;

    // Exibição do cardápio
    printf("======= CARDÁPIO =======\n");
    printf("100. Cachorro Quente - R$ 1.20\n");
    printf("101. Bauru Simples - R$ 1.30\n");
    printf("102. Bauru com Ovo - R$ 1.50\n");
    printf("103. Hamburguer - R$ 1.20\n");
    printf("104. Cheeseburguer - R$ 1.70\n");
    printf("105. Suco Natural - R$ 2.20\n");
    printf("106. Refrigerante - R$ 1.00\n");
    printf("========================\n");

    // Leitura do código do produto e da quantidade
    printf("Digite o código do produto: ");
    scanf("%d", &codigo_produto);
    printf("Digite a quantidade desejada: ");
    scanf("%d", &quantidade);

    // Calcula o valor a ser pago
    switch (codigo_produto) {
        case 100:
            valor_pago = 1.20 * quantidade;
            break;
        case 101:
            valor_pago = 1.30 * quantidade;
            break;
        case 102:
            valor_pago = 1.50 * quantidade;
            break;
        case 103:
            valor_pago = 1.20 * quantidade;
            break;
        case 104:
            valor_pago = 1.70 * quantidade;
            break;
        case 105:
            valor_pago = 2.20 * quantidade;
            break;
        case 106:
            valor_pago = 1.00 * quantidade;
            break;
        default:
            printf("Código de produto inválido.\n");
            return 1; // Encerra o programa com código de erro
    }

    // Exibe o valor total a ser pago
    printf("Valor a ser pago: R$ %.2f\n", valor_pago);

    return 0; // Indica que o programa foi executado com sucesso
}



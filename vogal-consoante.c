#include <stdio.h>

int main() {
    char letra;

    // Solicita ao usuário que insira uma letra
    printf("Digite uma letra: ");
    scanf("%c", &letra);

    // Verifica se a letra inserida é uma vogal ou consoante
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        printf("%c é uma vogal.\n", letra);
    } else if (letra >= 'a' && letra <= 'z') {
        printf("%c é uma consoante.\n", letra);
    } else {
        printf("Você não digitou uma letra minúscula válida.\n");
    }

    return 0;
}
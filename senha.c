#include <stdio.h>

int main() {
    int senha_correta[4] = {1, 2, 3, 4}; // Defina a senha correta aqui
    int tentativa[4];

    printf("Digite a senha (4 numeros inteiros separados por espaco):\n");

    // Loop para receber a tentativa do usuário até que a senha esteja correta
    while (1) {
        // Lendo a tentativa do usuário
        scanf("%d %d %d %d", &tentativa[0], &tentativa[1], &tentativa[2], &tentativa[3]);

        // Verificando se a tentativa está correta
        int correta = 1; // Assumindo que a senha está correta
        for (int i = 0; i < 4; i++) {
            if (senha_correta[i] != tentativa[i]) {
                correta = 0; // Se houver algum número diferente, a senha está incorreta
                break;
            }
        }

        // Se a senha estiver correta, saia do loop
        if (correta) {
            printf("Senha Correta\n");
            break;
        } else {
            printf("Senha Incorreta. Tente novamente.\n");
        }
    }

    return 0;
}
     
 

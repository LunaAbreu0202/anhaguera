//Siga @gustavotrindade77
#include <stdio.h>

int main()
{
    //declara variaveis
    int n1;
    
    //inicio do codigo
    printf("===IMPAR OU PAR===\n");
    printf("Digite um número que deseja descobrir se é impar ou par: ");
    scanf("%d",&n1);
    
    //verifica se é impar ou par
    if (n1 % 2 == 0 ){
        printf("O número %d", n1);
        printf(" é par");
    }
    
    else {
        printf("O número %d", n1);
        printf(" é ímpar");
    }
    

    return 0;
}




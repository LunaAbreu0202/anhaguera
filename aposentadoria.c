//Siga @gustavotrindade77
#include <stdio.h>

int main()

{
    int idade, tempo;
    
    printf("====DESCUBRA SE VOCÊ PODE SE APOSENTAR====\n\n");
    printf("Qual a sua idade?\n");
    scanf("%i",&idade);
    
    printf("Qual o seu tempo de trablaho?\n");
    scanf("%i",&tempo);
    
    if((idade >= 60) || (tempo >= 30 )  || (idade >= 60 & tempo >= 25))
    {
        printf ("Parabens voce foi um pobre sofredor, pode se aposentar!");
    }
    
    else {
        printf ("infelizmente voce vai sofrer mais uns anos!");
        
    }


    return 0;
}



//Siga @gustavotrindade77
#include <stdio.h>

float main()
{
  //Variaveis
 float n1,n2;
 
 printf ("Digite o numero: ");
 scanf ("%f",&n1);
 
 printf ("Digite outro numero: ");
 scanf ("%f",&n2);
 
 //compara as variaveis, se um é maior que a outra
 
if ( n1 > n2) {
    printf("O maior numero é: %.1f",n1);
}
else if (n2 > n1) {
    printf ("O maior numero é: %1.f",n2);
}else {
    printf("numeros iguais");

}
    
    return 0;
}




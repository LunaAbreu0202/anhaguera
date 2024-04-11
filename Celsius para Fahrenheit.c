#include <stdio.h>
 
int main(){
    float celsius , fahr;
 
    printf("Colocar temperatura em celsius: ");
    scanf("%f", &celsius);
 
    fahr = celsius * (9 / 5) + 32;
    printf("colocar temperatura em Fahrenheit: %.2f", fahr);
 
    return 0;
}

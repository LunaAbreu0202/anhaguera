#include <stdio.h>

int main()
{
  float num1, num2, num3;
  
  printf ("Digite tres valores: ");
  scanf ("%f %f %f", &num1 , &num2, &num3);
  
  if (num1 >= num2 && num1 >= num3) {
       printf ("%.2f é o maior valor.\n", num1);
} else if (num2 >= num1 && num2 >= num3) {
    printf ("%.2f é o maior valor.\n", num2);
} else { 
    printf ("%.2f é o maior valor.\n", num3);
}
    return 0;
}

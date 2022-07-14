//15. Elaborar um programa que apresente os resultados das potências do valor de base 3, elevado a um expoente que varie do valor 0 a 7.
#include <stdio.h>
#include <math.h>

int main() {
  int expoente[8] = {0, 1, 2, 3, 4, 5, 6, 7};
  
  printf("Resultado das potência de 3:\n");
  
  for(int i = 0; i < 8; i++){
    printf("3 elevado a %i = %0.f\n", expoente[i], pow(3, expoente[i]));
  }
  
  return 0;
}
/*17. Elaborar um programa que apresente os valores de conversão de graus Celsius em graus Fahrenheit, de 10 em 10 graus,
iniciando a contagem em dez graus Celsius e finalizando em cem graus Celsius. O programa deve apresentar os valores das 
duas tempeeraturas. Obs: Pesquise a fórmula de conversão.*/

#include <stdio.h>

int main() {
  int c, f;
  
  
  printf("Este programa irá converter temperaturas de 10° em 10° de Celsius para Fahrenheit\n");

  for(c = 0; c < 100; ){
    c = c + 10;
    f = (1.8 * c) + 32;
    printf("%i°C  --  %i°F\n", c, f); 
    
    }

  return 0;
}

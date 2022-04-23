//4. Implementar um programa para resolver o seguinte problema: José tem 150 centímetros e cresce 2 centímetros por ano. O Pedro tem 110 centímetros e cresce 3 centímetros por ano. Em quantos anos Pedro será maior que José?

#include <stdio.h>

int main() {
  
  int anos = 0, jose = 150, pedro = 110;

  printf("José tem 150 centímetros e cresce 2 centímetros por ano. O Pedro tem 110 centímetros e cresce 3 centímetros por ano. Em quantos anos Pedro será maior que José?\n");

  
  while(jose >= pedro){
    jose = jose + 2; //cresce 2 centímetros a cada passo do laço while
    pedro = pedro + 3; //cresce 3 centímetros a cada passo do laço while
    anos++; // passa 1 ano a cada passo do laço while
  }
  
  printf("\nSerão necessários %i anos para que Pedro seja maior que José", anos);
  
  return 0;
}
/*19. Elaborar um programa que apresente a média aritmética dos números inteiros existentes entre uma faixa especificada pelo usuário.*/

#include <stdio.h>

int main() {

  float m = 0, soma = 0; int a = 0, b = 0;
  
  printf("Digite um valor para o 1° valor da média aritmética: ");
  scanf("%i", &a);
  printf("Digite um valor para o último valor da média aritmética: ");
  scanf("%i", &b);
  
  for(int i = a; i <= b; i++){ //calcular valor da soma
  soma = soma + i;
    
  }

  m = (soma / (b - a)); //cálculo média aritimética
  
  printf("o valor da soma é: %.2f", soma); //verificar o valor da soma dos números da faixa
  
  printf("O valor da média entre os números inteiros da faixa %i --> %i é %.2f\n", a, b, m); //exibir valor da média aritimética
  
 
  return 0;
}

//7. Para que a divisão entre 2 números possa ser realizada, o divisor não pode ser nulo (zero). Escreva um programa para ler 2 valores e imprimir o resultado da divisão do primeiro pelo segundo. OBS: O programa deve validar a leitura do segundo valor (que não deve ser nulo). Enquanto for fornecido um valor nulo a leitura deve ser repetida.

#include <stdio.h>

int main() {
  
  float a, b = 1;
  printf("Informe o dividendo: ");
  scanf("%f", &a);
  printf("Informe o divisor: ");
  scanf("%f", &b);
  while(b == 0){
    
    printf("O divisor deve ser diferente de zero! Informe um divisor válido: ");
    scanf("%f", &b);
      }
  if(b != 0){
    printf("A divisão entre o número %.2f e %.2f é igual a %.2f", a, b, (a/b));
  }
      
  return 0;
}
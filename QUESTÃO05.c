//5. Fazer um programa que receba um valor n no teclado e determine o maior e o menor termo fornecido. A condição de termino do programa é quando o usuário digitar zero.

#include <stdio.h>

int main() {
  
  float maior, menor, n[2]; int quant = 0; // quant informa que essa é a primeira interação

  printf("Digite um número (caso queira sair digite 0): ");
  scanf("%f", &n[0]);
  
  if(n[0] == 0){
    printf("Você digitou 0 e finalizou o programa!");
  }
  while(n[0] != 0){ // o primeiro número digitado deve ser diferente de 0
    
    printf("Digite um número (caso queira sair digite 0): ");
    scanf("%f", &n[1]);
    
    if(quant == 0){ // se for a primeira iteração tomar como maior e menor o primeiro número digitado
      maior = n[0];
      menor = n[0];
    }
    quant = 1; // informa que não é mais a primeira iteração
    
    if(n[1] > maior){ //torna o número digitado o maior
      maior = n[1];
      }
    
    if(n[1] < menor){ // torna o número digitado o menor
      menor = n[1];
      }
    
    if(n[1] == 0){ // caso o segundo número seja 0 o programa encerra
      printf("Você digitou 0 e finalizou o programa!");
      break;
    }
    
    printf("\nO menor número digitado foi %.3f e o maior número foi %.3f\n", menor, maior);
  }
  return 0;
}
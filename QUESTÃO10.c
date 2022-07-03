//10.Elabore um programa que apresente os quadrados dos números inteiros múltiplos de 4 existentes na faixa de valores de 15 a 90.
#include <stdio.h>

int main(){
  int vetor[75], mult4[75], j = 15;
  printf("numeros de 15 a 90:\n[");
  for(int i = 0; i < 76; i++){
    vetor[i] = j;
    j++;
    printf("%i ", vetor[i]);
  }
printf("]\n\nNúmeros multiplos de 4, na faixa de 15 a 90:\n[");
  for(int i = 0; i < 75; i++){
    if(vetor[i] % 4 == 0){
      mult4[i] = vetor[i];
      printf("%i ", mult4[i]);
    }
  }
  
  printf("]\n\n");
  printf("Quadrados dos números inteiros múltiplos de 4 existentes na faixa de valores de 15 a 90:\n[");
  for(int i = 0; i < 75; i++){
    if(vetor[i] % 4 == 0){
      mult4[i] = mult4[i]*mult4[i];
      printf("%i ", mult4[i]);
    }
  }
  printf("]\n");
  return 0;

}
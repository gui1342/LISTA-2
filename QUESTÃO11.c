//10.Elabore um programa que apresente os quadrados dos números inteiros múltiplos de 4 existentes na faixa de valores de 15 a 90.
//11. Refaça a questão 11, considerando que os limites da faixa (A e B) sejam fornecidos pelo usuário. O programa deve funcionar tanto para A > B quanto para B > A.
#include <stdio.h>
#include <stdlib.h>

void criar_vetor(int vetor[], int a, int b, int menor, int maior);

int main(){
  int a, b, ab/*tamanho do vetor*/, *vetor/*vetor principal*/, maior, menor, *mult4/*vetor com os multiplos de 4*/;
  
        printf("Qual a faixa de valores A e B? \nA: ");
        scanf("%i", &a);
  
        printf("B:");
        scanf("%i", &b);
  
  ab = abs((a-b)); //valor sempre positivo, representa o tamanho do vetor
  
  vetor = (int *) malloc((ab) * sizeof(int));//alocação dinâmica vetor principal
  
  mult4 = (int *) malloc((ab) * sizeof(int));//alocação dinâmica vetor multiplos de 4

  
          //descobrir se a ou b é maior e menor entre si
      if(a > b){
        maior = a;
        menor = b;
      }
      if(a < b){
        maior = b;
        menor = a;
      }

  
  criar_vetor(vetor, a, b, menor, maior);//invocando a função para criar vetor principal com a faixa específicada pelo usuário

  

    printf("\nNúmeros multiplos de 4, na faixa de %i a %i:\n[ ", menor, maior);
          //calcular quais números do vetor principal são multiplos de 4
    for(int i = menor; i < maior + 1; i++){
      if(vetor[i] % 4 == 0){
        mult4[i] = vetor[i];
        printf("%i ", mult4[i]);
      }
    }
  
  printf("]\n\n");
  printf("Quadrados dos números inteiros múltiplos de 4 existentes na faixa de valores de %i a %i:\n[ ", menor, maior);
  
    for(int i = menor; i < maior + 1; i++){
      if(vetor[i] % 4 == 0){
        mult4[i] = mult4[i]*mult4[i];
        printf("%i ", mult4[i]);
      }
    }
    printf("]\n");
  return 0;

}

void criar_vetor(int vetor[], int a, int b, int menor, int maior){
  int j = menor;
  
  printf("\nNúmeros de %i a %i:\n[", menor, maior);
  
    for(int i = menor; i < maior + 1; i++){
      vetor[i] = j;
      j++;
      printf(" %i", vetor[i]);
      }
    printf(" ]\n");
}
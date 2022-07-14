//14. Elabore um programa que apresente a quantidade de números divisíveis por 3 pertencentes a faixa A,B especificada pelo usuário. O programa deve funcionar tanto para A > B quanto para B > A.

#include <stdio.h>
#include <stdlib.h>

void criar_vetor(int vetor[], int a, int b, int menor, int maior);

int main(){
  int a, b, ab/*tamanho do vetor*/, *vetor/*vetor principal*/, maior, menor, *div3/*vetor números divisíveis po 3*/, qtd = 0/*quantidade de números do vetor que são divisíveis por 3*/;
  
        printf("Qual a faixa de valores A e B? \nA: ");
        scanf("%i", &a);
  
        printf("B:");
        scanf("%i", &b);
  
  ab = abs((a-b)); //valor sempre positivo, representa o tamanho do vetor
  
  vetor = (int *) malloc((ab) * sizeof(int));//alocação dinâmica vetor principal
  
  div3 = (int *) malloc((ab) * sizeof(int));//alocação dinâmica vetor divisíveis por 3

  
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

  

    printf("\nNúmeros divisíveis por 3 na faixa de %i a %i:\n[ ", menor, maior);
          //calcular quais números do vetor principal são divisíveis por 3
    for(int i = menor; i < maior + 1; i++){
      if(vetor[i] % 3 == 0){
        div3[i] = vetor[i];
        printf("%i ", div3[i]);
        qtd++;
      }
    }
  
  printf("] ---> %i números.\n\n", qtd);
  
  free(vetor); //liberar memória alocada
  free(div3); //liberar memória alocada
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
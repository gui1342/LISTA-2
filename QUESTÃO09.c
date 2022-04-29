//9.A série de Fibonacci é formada pela seguinte sequência: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55... etc. Escreva um algoritmo que gere a série de Fibonacci até o vigésimo termo.

#include<stdio.h>


int main( ){

int v[20], i; //neste caso é um vetor de 20 elementos
  
  v[0] = 1; v[1] = 1; //declarando os 2 primeiors termos
  printf("A série Fibonacci até o 20° termo:\n");
  printf("%i %i ", v[0], v[1]);
  
  for(i = 2; i < 20; i++){
    
    v[i] = v[i - 1] + v[i - 2]; //fórmula sequencia Fibonacci
    
    printf("%i ", v[i]); //mostrar os termos até o 20
    
    }
  
  return 0;

}
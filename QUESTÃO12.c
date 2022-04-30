///*12. Elaborar um programa que mostre os resultados da tabuada de um número inteiro qualquer, a qual deve ser apresentada de acordo com sua forma tradicional.
#include<stdio.h>


int main( ){

int n, i;
    printf("Digite um número para ver sua tabuada: ");
    scanf("%i", &n);
    for(i = 1; i <11; i++){
        printf("%i  *  %i  =  %i\n", n, i, n * i);
    }
  
  return 0;

}
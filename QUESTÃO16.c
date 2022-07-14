/*16.Escreva um programa que apresente o somatório de todos os números divisíveis por 3 
pertencentes ao intervalo [0,100] e o somatório de todos os números divisíveis por 5 
pertencentes ao intervalo ]100,200]. Obs.: Utilize apenas um laço de repetição.*/

#include <stdio.h>

int main() {
  int s3 = 0, s5 = 0;
  
  for(int i = 0; i < 201; i++){
    if(i < 101 && i % 3 == 0){
      s3 = s3 + i;
      //printf("d3 : %i\n", i);
    }
    if(i > 100 && i % 5 == 0){
      s5 = s5 + i;
      //printf("d5 : %i\n", i);
    }
  }
  printf("Somatório de todos os números divisíveis por 3 pertencentes ao intervalo [0,100]: %i\n", s3);
  printf("\nSomatório de todos os números divisíveis por 5 pertencentes ao intervalo ]100,200]: %i", s5);
  
  return 0;
}
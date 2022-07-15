/*18. Escrever um programa que calcule e apresente o somatório do número de grãos de trigo que se pode
obter num tabuleiro de xadrez, obedecendo à seguinte regra: colocar um grão de trigo no primeiro
quadro e nos quadros seguintes o dobro do quadro anterior. Ou seja, no primeiro quadro coloca-se um
grão, no segundo quadro colocam-se dois grãos (tendo neste momento três grãos), no terceiro quadro
colocam-se quatro grãos (tendo neste momento sete grãos), no quarto quadro colocam-se oito grãos
(tendo-se então quinze grãos) até atingir o sexagésimo quarto quadro.*/

#include <stdio.h>

int main() {
  double sg = 0, graos = 0;
  int quadro = 1;
  
  for(quadro = 1; quadro < 65; quadro++){
    if(quadro == 1){
      sg = graos + 1;
      printf("%i° quadro   =   %0.f\n", quadro, sg);
      graos = 1;
    }
    if(quadro > 1){
      graos += graos;
      sg = sg + graos;
      printf("%i° quadro + %0.f  =   %0.f\n", quadro, graos, sg);
    }
  }
  
  return 0;
}
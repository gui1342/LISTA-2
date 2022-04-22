#include <stdio.h>

int main() {
  char num; int i;
  
  do
  {
    printf("Digite um número de 1 a 7 para ver seu correspondente em dia da semana: ");
    scanf("%c", &num); 

    switch(num){
      case '1':
        printf("O número 1 corresponde a domingo!\n");
        break;
      
      case '2':
        i = 0;
        printf("O número 2 corresponde a segunda!\n");
        break;
      
      case '3':
        i = 0;
        printf("O número 3 corresponde a terça!\n");
        break;
  
      case '4':
        i = 0;
        printf("O número 4 corresponde a quarta!\n");
        break;
  
      case '5':
        i = 0;
        printf("O número 5 corresponde a quinta!\n");
        break;
      
      case '6':
        i = 0;
        printf("O número 6 corresponde a sexta!\n");
        break;
  
      case '7':
        i = 0;
        printf("O número 7 corresponde a sábado!\n");
        break;
  
      case '0':
        i = 1;
        printf("Número de dia não válido!\n");
        break;
    }
  }while(i == 0);
  return 0;
}